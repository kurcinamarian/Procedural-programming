#include <stdio.h>

int main(){
    int X[11],i,cislo,spravna;
    spravna = 1;
    printf("Zadavaj cisla: \n");
    for(i=0;i<=10;i++){
        scanf("%d",&cislo);
        X[i]=cislo;
    }
    if (X[1]>10 || X[1]<1){
        printf("Postupnost je nespravna");
    }
    else{
        for(i=1;i<=10;i++){
        if(X[i]>2*X[i-1] || X[i]<0.5*X[i-1]){
            spravna = 0;
        }
        }
         if(spravna == 0){
            printf("Postupnost je nespravna");
        }
        else{
            printf("Postupnost je spravna");
        }
    }
    return 0;
}