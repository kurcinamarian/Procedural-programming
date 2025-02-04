#include<stdio.h>

int main(){
    int N = 0;
    int parny = 1;
    int a = 0;
    scanf("%d",&N);
    char field[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(parny == 1){
                field[i][j] = (char)(a++%26)+'a';
            }
            else{
                field[i][N-j-1] = (char)(a++%26)+'a';
            }
        }
        parny = -parny;
    }
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%c ", field[i][j]);
        }
        printf("\n");
    }
}