#include <stdio.h>
#include <stdlib.h>
#define TAM 9

void bs(int n[], int tam){
    int i, j, aux;

    for(i = 1; i < tam; i++){
        for(j = 0; j < tam - 1; j++){
            if(n[j] > n[j + 1]){
                aux = n[j];
                n[j] = n[j + 1];
                n[j + 1] = aux;
            }
        }
    }
}

void is(int n[], int tam){
    int i, j, aux;

    for(i = 0; i < tam - 1; i++){
        if(n[i] > n[i + 1]){
            aux = n[i + 1];
            n[i + 1] = n[i];
            n[i] = aux;
            j = i - 1;
            while(j >= 0){
                if(aux < n[j]){
                    n[j + 1] = n[j];
                    n [j] = aux;
                }else{
                    break;
                }
                j = j - 1;
            }
        }
    }
}

void ss(int n[],int tam){
    int i, j, menor, aux;

    for(i=0;i<tam-1;i++){
        menor=i;
        for(j=i+1 ; j<tam ; j++){
            if(n[menor] > n[j])
                menor=j;
        }
        if(i!=menor){
            aux=n[i];
            n[i]=n[menor];
            n[menor]=aux;
        }
    }
}

void merge(int n[], int ini, int meio, int fim){
    int i, j, k;
    int tam1 = meio - ini + 1;
    int tam2 = fim - meio;
    int* left = (int*)malloc(tam1 * sizeof(int));
    int* rigth = (int*)malloc(tam2 * sizeof(int));

    for (i = 0; i < tam1; i++){
        left[i] = n[ini + i];
    }
    for (j = 0; j < tam2; j++){
        rigth[j] = n[meio + 1 + j];
    }
    i = 0;
    j = 0;
    k = ini;
    while (i < tam1 && j < tam2){
        if (left[i] <= rigth[j]){
            n[k] = left[i];
            i++;
        } else{
            n[k] = rigth[j];
            j++;
        }
        k++;
    }
    while (i < tam1){
        n[k] = left[i];
        i++;
        k++;
    }
    while (j < tam2){
        n[k] = rigth[j];
        j++;
        k++;
    }
    free(left);
    free(rigth);
}
void ms(int n[], int ini, int fim){
    int meio;
    if (ini < fim){
        meio = ini + (fim - ini)/2;
        ms(n, ini, meio);
        ms(n, meio + 1, fim);
        merge(n, ini, meio, fim);
    }
}
int part(int n[], int ini, int fim){
    int p = n[fim];
    int i = ini - 1;
    int j, temp;

    for (j = ini; j <= fim - 1; j++){
        if (n[j] < p){
            i++;
            temp = n[i];
            n[i] = n[j];
            n[j] = temp;
        }
    }
    temp = n[i + 1];
    n[i + 1] = n[fim];
    n[fim] = temp;

    return i + 1;
}
void qs(int n[], int ini, int fim){
    if (ini < fim) {
        int p = part(n, ini, fim);
        qs(n, ini, p - 1);
        qs(n, p + 1, fim);
    }
}

int main(){
   int n[TAM] = {4, 5, 8, 2, 9, 1 , 3, 7, 6}, i;
   int a[0], b[8];

   printf("Orden atual dos itens:\n");
   for(i = 0; i < TAM; i++){
        printf("%4d", n[i]);
   }

   //bs(n, TAM);
   //is(n, TAM);
   //ss(n, TAM);
   //ms(n,0,TAM-1);
   qs(n,0,TAM-1);

   printf("\nElementos em ordem crescente:\n");
   for(i = 0; i < TAM; i++){
        printf("%4d", n[i]);
   }
   return 0;
}
