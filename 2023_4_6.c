#include <stdio.h>

int main() {
    FILE* fw;
    int i;
    double x;
    printf("Zadaj cislo: \n");
    scanf("%lf",&x);
    fw = fopen("nasobky.txt", "w");
    for (i = 1; i <= 10; i++)
        fprintf(fw, "%d * %.2lf = %.2lf\n", i, x, i*x);
    fclose(fw);
    return 0;
}
