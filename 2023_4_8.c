#include <stdio.h>

int main() {
    FILE *fr, *fw;
    fr = fopen("znak.txt","r");
    char znak;
    printf("Zadaj znak: \n");
    scanf("%c", &znak);
    if(znak == 's'){
        fw = fopen("novy.txt","w");
        while((znak = getc(fr)) != EOF){
            putc(znak, fw);
        }
        fclose(fw);
    }
    else{
        while((znak = getc(fr)) != EOF){
            printf("%c",znak);
        }
    }
    fclose(fr);
    return 0;
}