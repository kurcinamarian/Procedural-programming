#include <stdio.h>

int main(){
    int cislo_N, i, j;
    printf("Zadaj cislo: \n");
    scanf("%d", &cislo_N);
    if(cislo_N<1 || cislo_N>15){
       printf("Cislo nie je z daneho intervalu");
    }
    else{
        for (i = 1; i <= cislo_N; i++){
            printf("%d: ", i);
            for (j = cislo_N+1-i; j >= 1; j--){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    return 0;
}