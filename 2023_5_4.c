#include <stdio.h>

void vymen_ukazovatele(int *p_a, int *p_b){
    int *pom;
    pom = p_a;
    p_a = p_b; 
    p_b = pom;
    printf("p_a: %p %d \n", p_a, *p_a);
    printf("p_b: %p %d \n", p_b, *p_b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int *p_a = &a;
    int *p_b = &b;
    printf("p_a: %p %d \n", &a, a);
    printf("p_b: %p %d \n", &b, b);
    vymen_ukazovatele(p_a, p_b);
}