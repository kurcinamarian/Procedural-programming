#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>


void reset(int pismena[]){
    printf("%d: ", 1 + pismena[26]++);
    for(int i = 0; i < 26; i++){
        printf("%d ", pismena[i]);
    }
    printf("\n");
    for(int i = 0; i < 26; i++){
        pismena[i] = 0;
    }

}

int main(){
	int* pismena;
    pismena = (int*)malloc(27 * sizeof(int));
    for(int i = 0; i < 27; i++){
        pismena[i] = 0;
    }
	FILE *fr;
    char subor[20];
    printf("Zadaj nazov suboru: \n");
    scanf("%s",subor);
    fr = fopen(subor,"r");
    char znak;
    printf("   ");
    for(int i = 0; i < 26; i++){
        printf("%c ", 'A'+ i);
    }
    printf("\n");
    while((znak = getc(fr))!= EOF){
        if(znak == '\n'){
            reset(pismena);
        }
        pismena[(int)(toupper(znak))-(int)('A')]++;
    }
    reset(pismena);
    return 0;

}