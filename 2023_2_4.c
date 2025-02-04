#include<stdio.h>

int main(){
    char prve_pismeno, druhe_pismeno;
    printf("Zadaj 2 pismena: \n");
    scanf("%c %c", &prve_pismeno, &druhe_pismeno);
    printf("%c %d \n", prve_pismeno+('A'-'a') , prve_pismeno+('A'-'a'));
    printf("%c %d \n", druhe_pismeno+('A'-'a') , druhe_pismeno+('A'-'a'));
    return 0;
}