#include <stdio.h>
#include <stdlib.h>

int* alokuj_1D_pole(int m){
    int *x;
    x = (int*) malloc(sizeof(int)*m);
    for (int i = 0; i < m; i++){
        scanf("%d", &x[i]);
    }
    return x;
}

void vypis_1D_pole(int m, int x[]){
    for(int i = 0; i < m; i++){
        printf("%d,", x[i]);
    }
    printf("\n");
}


int maximum_poz(int m, int x[]){
    int max = x[0];
    int poz = 0;
    for(int i = 1; i < m; i++){
        if(max < x[i]){
            max = x[i];
            poz = i;
        }
    }
    return poz;
}

int minimum_poz(int m, int x[]){
    int min = x[0];
    int poz = 0;
    for(int i = 1; i < m; i++){
        if(min > x[i]){
            min = x[i];
            poz = i;
        }
    }
    return poz;
}

void uvolni(int *x){
    free(x);
}

int main(){
    int m;
    int *x; 
    scanf("%d", &m);
    x = alokuj_1D_pole(m);
    vypis_1D_pole(m,x);
    printf("Maximum: %d \n",x[maximum_poz(m,x)]);
    printf("Minimum: %d \n",x[minimum_poz(m,x)]);
} 