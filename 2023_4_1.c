#include <stdio.h>

int zisti_prvocislo(int cislo){
    int j;
    for(j=2; j < cislo; j++){
        if(cislo%j==0){
            return -1;
        }
    }
    if(cislo <= 1){
        return -1;
    }
    return 1;
}



int main(){
    int i, hr_d, hr_h;
    int pocet = 0;
    printf("Zadaj hranice: \n");
    scanf("%d %d", &hr_d, &hr_h);
    for(i=hr_d; i<=hr_h; i++){
        if (zisti_prvocislo(i)==1){
            printf("%d \n", i);
            pocet++;
        }

    }
    if(pocet == 0){
        printf("Prvocislo neexistuje.");
    }
    return 0;
}