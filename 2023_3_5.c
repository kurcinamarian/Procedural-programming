#include <stdio.h>

int main(){
    int f, g, i;
    printf("Zadaj hranice: \n");
    scanf("%d %d", &f, &g);
    for (i=f; i<=g; i++){
        if (i%3==0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}