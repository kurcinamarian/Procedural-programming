#include <stdio.h>

int main(){
    int polomer;
    printf("Zadaj polomer:\n");
    scanf("%d", &polomer);
    printf("Obvod kruhu s polomerom %d je: %0.2f", polomer, 2*polomer*3.14);
    return 0;
}

