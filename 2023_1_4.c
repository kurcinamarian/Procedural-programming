#include <stdio.h>

int main(){
    int cislo;
    printf("Zadaj cislo:\n");
    scanf("%d", &cislo);
    printf("Druha mocnina cisla %d je: %d", cislo, cislo*cislo);
    return 0;
}

