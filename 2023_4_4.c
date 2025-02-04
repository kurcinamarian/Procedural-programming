#include <stdio.h>

int funkcia (int x, int sucet){
    if (x >= 1){
        if(x % 2 == 1){
        sucet += x;
        }
        funkcia(--x,sucet);
    }
    else{
        printf("Sucet je: %d", sucet);
    }
}

int main(){
    int hranica;
    printf("Zadaj hranicu: \n");
    scanf("%d", &hranica);
    funkcia(hranica,0);
    return 0;
}

