#include <stdio.h>

int funkcia (int x, int cif_sucet){
    cif_sucet += x % 10;
    x = x / 10;
    if(x > 0){
        funkcia(x,cif_sucet);
    }
    else{
        printf("Ciferny sucet je %d", cif_sucet);
    }
}

int main(){
    int cislo;
    printf("Zadaj cislo: \n");
    scanf("%d", &cislo);
    funkcia(cislo,0);
    return 0;
}
