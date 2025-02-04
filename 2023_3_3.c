#include <stdio.h>

int main(){
    int pocet_N, adept, i, pocet_v_intervale;
    pocet_v_intervale = 0;
    printf("Zadaj pocet cisel: \n");
    scanf("%d", &pocet_N);
    printf("Zadavaj cisla: \n");
    for (i=1; i<=pocet_N; i++){
        scanf("%d", &adept);
        if(0<adept && adept<=100){
            pocet_v_intervale += 1;
        }
    }
    printf("Pocet v intervale je: %d", pocet_v_intervale);
    return 0;
}