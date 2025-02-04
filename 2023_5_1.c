#include <stdio.h>

void nacitaj(float *p_a, float *p_b){
    scanf("%f %f",p_a, p_b);
}

void vypocitaj(float a, float b){
    printf("Obsah: %0.3f \n", a*b);
    printf("Obvod: %0.3f \n", 2*b+2*a);
}

int main(){
    float a, b;
    nacitaj( &a, &b);
    vypocitaj(a, b);
}