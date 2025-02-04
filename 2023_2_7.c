#include<stdio.h>

int main(){
    int C1, C2;
    char znak;
    printf("Zadaj 2 cisla: \n");
    scanf("%d %d %c",&C1, &C2, &znak);
    switch(znak){
        case '+':
            printf("%d %c %d = %d", C1, znak ,C2 ,C1+C2);
            break;
        case '-':
            printf("%d %c %d = %d", C1, znak ,C2 ,C1-C2);
            break;
        case '*':
            printf("%d %c %d = %d", C1, znak ,C2 ,C1*C2);
            break;
        case '/':
            printf("%d %c %d = %d", C1, znak ,C2 ,C1/C2);
            break;
        default:
            printf("zle zadana forma");
    }
    return 0;
}