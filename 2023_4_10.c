#include <stdio.h>

int main() {
    FILE *fr1, *fr2;
    fr1 = fopen("prvy.txt","r");
    fr2 = fopen("druhy.txt","r");
    char znak1, znak2;
    int pocet_rozne, rozdiel;
    pocet_rozne = rozdiel = 0;
    while((znak1 = getc(fr1)) != EOF && (znak2 = getc(fr2)) != EOF){
        if(znak1 != znak2){
            pocet_rozne++;
        }
    }
    while (getc(fr1) != EOF){
        rozdiel++;
    }
    while (getc(fr2) != EOF){
        rozdiel++;
    }
    
    printf("Pocet roznych znakov: %d \n", pocet_rozne);
    printf("Jeden zo suborov je dlhsi o %d \n", rozdiel);
    fclose(fr1);
    fclose(fr2);
    return 0;
}