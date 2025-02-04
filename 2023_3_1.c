#include <stdio.h>

int main(){
    int pocet_cisel, i;
    float adept, maxi, mini;
    printf("Zadaj pocet cisel: \n");
    scanf("%d", &pocet_cisel);
    printf("Zadavaj cisla: \n");
    scanf("%f",&adept);
    maxi = mini = adept;
    for (i=1; i<=pocet_cisel-1; i++){
            scanf("%f",&adept);
            if(adept>maxi){
                maxi = adept;
            }
            else if (adept<mini){
                mini = adept;
            }
    }
    printf("Maximum: %.2f \n", maxi); 	
    printf("Minimum: %.2f \n", mini); 
    return 0;
}