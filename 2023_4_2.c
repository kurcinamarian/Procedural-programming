#include <stdio.h>

double tyzdenna_mzda(double h_mzda, double hod){
    if(hod<40){
        return h_mzda*hod;
    }
    else if (hod<60){
        return h_mzda*40 + 1.5*h_mzda*(hod - 40);
    }
    else{
        return h_mzda*40 + 1.5*h_mzda*20 + 2*h_mzda*(hod - 60);
    }      
}



int main(){
    double spolu, h_mzda, hod;
    int i;
    spolu = 0;
    printf("Zadaj pocet vstupov: \n");
    scanf("%d", &i);
    printf("Zadaj mzdu za hodinu a pocet hodin: \n");
    for(i; i>0; i--){
        scanf("%lf %lf", &h_mzda, &hod);
        printf("Hod. mzda: %0.2lf Euro/hod, hodin: %0.2lf, spolu: %0.2lf Euro \n",  h_mzda, hod, tyzdenna_mzda(h_mzda, hod));
        spolu += tyzdenna_mzda(h_mzda, hod);
    }
    printf("Celkova mzda: %0.2lf Euro \n", spolu);
    return 0;
}