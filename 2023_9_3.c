#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct clovek{
    char* meno;
    int pocet;
    struct clovek *dalsi;
} DATA;

int zisti_dlzku(char *string){
    int poz = 0;
    while (string[poz] != '\0'){
        poz++;
    }
    return poz+1;
}

char* hladaj_max(DATA* zaciatok){
    DATA *akt = zaciatok;
    int max = 0;
    char* max_meno;
    while (akt != NULL){
            if(akt->pocet > max){
                max_meno = akt->meno;
                max = akt->pocet;
            }
            //printf("%s - %d\n",akt->meno,akt->pocet);
            akt = akt->dalsi;
    }
    return max_meno;
}

int main(){
    DATA* zaciatok = NULL;
    char string[30];
    scanf("%s",string);
    int dlzka;
    DATA *novy = (DATA*)malloc(sizeof(DATA));
    dlzka = zisti_dlzku(string);
    //printf("%d\n",dlzka);
    novy->meno = (char*)malloc(dlzka*sizeof(char));
    strcpy(novy->meno, string);
    novy->pocet = 1;
    novy->dalsi = zaciatok;
    zaciatok = novy;
    scanf("%s",string);
    while(strcmp(string, "koniec") != 0){
        DATA *akt = zaciatok;
        int bol = 0;
        while (akt != NULL){
            if(strcmp(akt->meno, string)==0){
                akt->pocet++;
                bol = 1;
            }
            akt = akt->dalsi;
        } 
        if (bol == 0){  
            DATA *novy = (DATA*)malloc(sizeof(DATA));
            dlzka = zisti_dlzku(string);
            //printf("%d\n",dlzka);
            novy->meno = (char*)malloc(dlzka*sizeof(char));
            strcpy(novy->meno, string);
            novy->pocet = 1;
            novy->dalsi = zaciatok;
            zaciatok = novy;
        }
        scanf("%s",string);
	}    
    printf("Najviac navstevuje kino %s.\n", hladaj_max(zaciatok));
    while (zaciatok != NULL) {
        DATA *next = zaciatok->dalsi;
        free(zaciatok);
        zaciatok = next;
    }
    return 0;
}