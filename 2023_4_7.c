#include <stdio.h>

int main() {
    FILE* fr;
    double cislo, sucet;
    sucet = 0;
    if (fr = fopen("cisla.txt", "r")){
        while ( fscanf(fr, "%lf", &cislo) != EOF){
            printf("%.2lf \n", cislo);
            sucet += cislo;
        }
        fclose(fr);
        printf("Sucet cisel je: %.2lf", sucet);
    }   
    else{
        printf("Neexistuje subor. \n");
    }
    return 0;
}