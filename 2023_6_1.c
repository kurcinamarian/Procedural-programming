#include <stdio.h>
#include<stdlib.h>

int main(){
	char* pole;
	int n;
    printf("Zadaj pocet znakov: \n");
	scanf("%d", &n);
    pole = (char*)malloc(n * sizeof(char));
	if (pole == NULL) {
		printf("Pole sa nepodarilo vytvorit.\n");
		exit(EXIT_FAILURE);
	}
    printf("Zadavaj znaky: \n");
	for (int i = 0; i < n; i++){
        scanf(" %c", &pole[i]);
    }
    for (n ; n>0; n--){
        printf("%c", pole[n-1]);
    }
    return 0;
}