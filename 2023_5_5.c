#include <stdio.h>

int delitele(int x[], int pocetx, int y[], int k){
    int pocety = 0;
    for(int i = 0; i<pocetx; i++){
        if(k % x[i] == 0){
            y[pocety] = x[i];
            pocety++;
        }
    }
    return pocety;
}

int main(){
    int x[10] = {4, 7, 10, 2, 3, 9, 6, 5, 8, 12};
    int y[10] = {};
    int pocetx = 10;
    int pocety = 0;
    pocety = delitele(x, pocetx, y, 24);
    printf("pocety: %d \n", pocety);
    printf("y: {%d",y[0]);
    for(int i = 1; i<pocety; i++){
        printf(",%d",y[i]);
    }
    printf("} \n");
}