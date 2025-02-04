#include<stdio.h>

int main(){
    double rozmer_A, rozmer_B, rozmer_C;
    printf("Zadaj rozmery kvadra:\n");
    scanf("%lf %lf %lf", &rozmer_A, &rozmer_B, &rozmer_C);
    printf("Objem: %0.3lf", rozmer_A*rozmer_B*rozmer_C);
    return 0;
}