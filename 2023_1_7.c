#include<stdio.h>

int main(){
    int povodne_cislo;
    printf("Zadaj cislo:\n");
    scanf("%d", &povodne_cislo);
    scanf("Cena bez dph: %d", povodne_cislo);
    printf("Predajna cena s danou 20%%: %.1f", 1.2*povodne_cislo);
    return 0;
}