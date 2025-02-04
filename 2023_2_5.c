#include<stdio.h>

int main(){
    int C1, C2;
    printf("Zadaj 2 cisla: \n");
    scanf("%d %d",&C1, &C2);
    printf("Cislo C1=%d je %s ako C2=%d.", C1, (C1<C2)?"mensie":"vacsie" ,C2);
    return 0;
}