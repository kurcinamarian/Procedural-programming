#include<stdio.h>

int main(){
    float cislo_a, cislo_b, cislo_c;
    printf("Zadaj 3 cisla: \n");
    scanf("%g %g %g", &cislo_a, &cislo_b, &cislo_c);
    printf("Priemer cisel %g, %g a %g je: %g", cislo_a, cislo_b, cislo_c, (cislo_a+cislo_b+cislo_c)/3);
    return 0;
}