#include<stdio.h>

int main(){
    int a, b, c, d, e, vysledok;
    printf("zadaj 5 cisel: \n");
    scanf("%d %d %d %d %d",&a ,&b ,&c ,&d ,&e);
    vysledok = (e / --a * b++ / c++);
    /*ako prve odcita 1 od a, potom zlava doprava urobi postupne vypocty(najprv/a(zmensene o 1 zo zaciatku),
    potom *b a nakoniec /c), po priradeni do vysledku sa b a c zvacsia o 1*/
    printf("%d \n",vysledok);
    scanf("%d %d %d %d %d",&a ,&b ,&c ,&d ,&e);
    vysledok = (a %= b = d = 1 + e / 2);
    /*najprv vykona operaciu e/2, potom pripocita 1, nasledovne vykonava prikazy zprava
    hodnotu 1+e / 2 priradi premennym d, nasledovne tuto hodnotu priradi aj premennej b
    potom sa vykona vypocet a %= b (to je to iste ako a = a % b, co teda priradi premennej a zvysok po deleni cislom b(premennej b bola priradena hodnota 1+e/2)) */
    printf("%d",vysledok);
    return 0;
}