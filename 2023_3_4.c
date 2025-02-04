#include <stdio.h>

int main(){
    int i;
    float N = 0;
    printf("Zadaj cislo: \n");
    while(N<1 || (int)N-N!=0){
        scanf("%f", &N);
    }
    for (i=N-1; i>=1; i--){
        N *= i;
    }
    printf("Faktorial je: %d", (int)N);
    return 0;
}