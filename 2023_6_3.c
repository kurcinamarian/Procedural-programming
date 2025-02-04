#include <stdio.h>
#include <stdlib.h>

int** alokuj_2D_pole(int n, int m){
	int** pole = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++){
		pole[i] = (int *)malloc(m * sizeof(int));
    }
	return pole;
}

void vypis_2D_pole(int **pole, int n, int m){
	 for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d ", pole[i][j]);
		}
		printf("\n");
	}

}


int main() {
    int n, m, i;
	printf("Zadaj rozmery: \n");
	scanf("%d", &n);
	scanf("%d", &m);
    int** pole = alokuj_2D_pole(n,m);
    for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &pole[i][j]);
		}
	}
	vypis_2D_pole(pole, n, m);

}

