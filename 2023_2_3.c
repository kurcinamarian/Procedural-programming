#include<stdio.h>

int main(){
    int cele, desat=0;
    printf("Napis cislo: \n");
    scanf("%d.%d", &cele, &desat);
    while (desat>=10){
        desat = desat / 10;
    }
    printf("%d", (desat<5)?cele:cele+1);
    return 0;
}