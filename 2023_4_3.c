#include <stdio.h>

long reverzne_cislo(long x){
    int i;
    long nove_cislo = 0;
    while(x>0){
        nove_cislo = nove_cislo*10 + x%10;
        x = x / 10;
    }
    return nove_cislo;
}



int main(){
    long cislo;
    printf("Zadaj cislo: \n");
    while (cislo >= 0){
        scanf("%ld", &cislo);
        printf("%ld \n",reverzne_cislo(cislo));
        if(reverzne_cislo(cislo) == cislo){
            printf("Cislo %ld je palindrom. \n", cislo);
        }
        else{
            printf("Cislo %ld nie je palindrom. \n", cislo);
        }
    }
    return 0;
}