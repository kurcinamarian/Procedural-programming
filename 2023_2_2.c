#include<stdio.h>

int main(){
    double vyska, hmotnost;
    printf("Zadaj vysku v cm a hmotnost v kg: \n");
    scanf("%lf %lf", &vyska, &hmotnost);
    printf("BMI: %.3lf", hmotnost/(0.0001*vyska*vyska));
    return 0;
}