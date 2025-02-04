#include <stdio.h>

int maximum(int *p_a, int *p_b){
    if(*p_a <= *p_b){
        return *p_b;
    }
    else{
        return *p_a;
    }
}

int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d",  maximum( &a, &b));
}