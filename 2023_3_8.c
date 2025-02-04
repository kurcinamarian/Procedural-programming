#include <stdio.h>


void nasobok(double x, int n){
    int i;
    double vysledok = x;
    for(i=1; i<n; i++){
        vysledok += x;
    }
    printf("%0.2lf*%d = %.2lf \n", x,n,vysledok);
}

int main(){
    double zaklad;
    int c, i;
    printf("Zadaj dva cinitele: \n");
    scanf("%lf %d", &zaklad, &c);
    for(i=1;i<=c;i++)
        nasobok(zaklad,i);
    return 0;
}
