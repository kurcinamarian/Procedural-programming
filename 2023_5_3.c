#include <stdio.h>
#include <math.h>

void kvadraticka_rovnica(double *p_a, double *p_b, double *p_c){
    double pom_a, pom_b, pom_c;
    pom_a = *p_a;
    pom_b = *p_b;
    pom_c = *p_c;
    if (pom_b*pom_b-4*pom_a*pom_c < 0){
        *p_a = 0;
        *p_b = 0;
        *p_c = 0;
    }
    else if (pom_b*pom_b-4*pom_a*pom_c >= 0){
        if(pom_b*pom_b-4*pom_a*pom_c == 0){
            *p_a = 1;
            *p_b = (-pom_b)/(2*pom_a);
            *p_c = 0;
        }   
        else{
            *p_a = 2;
            *p_b = (-pom_b + sqrt(pom_b*pom_b-4*pom_a*pom_c))/(2*pom_a);
            *p_c = (-pom_b - sqrt(pom_b*pom_b-4*pom_a*pom_c))/(2*pom_a);
        }
    }
    
}

int main(){
    double a, b, c;
    scanf("%lf %lf %lf",&a, &b, &c);
    kvadraticka_rovnica( &a, &b, &c);
    printf("Pocet korenov kvadratickej rovnice: %lf \n", a);
    printf("Prvy koren ma hodnotu: %lf \n", b);
    printf("Druhu koren ma hodnotu: %lf \n", c);
}