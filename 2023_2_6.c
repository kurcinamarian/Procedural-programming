#include<stdio.h>

int main(){
    int C1, C2, vysledok;
    char znak;
    printf("Zadaj 2 cisla: \n");
    scanf("%d %d %c",&C1, &C2, &znak);
    if (znak == '+'){
        vysledok = C1+C2;
    }
    else if (znak == '-')
    {
        vysledok = C1-C2;
    }
    else if (znak == '*')
    {
        vysledok = C1*C2;
    }
    else if (znak == '/')
    {
        vysledok = C1/C2;
    }
    printf("%d %c %d = %d", C1, znak ,C2 ,vysledok);
    return 0;
}