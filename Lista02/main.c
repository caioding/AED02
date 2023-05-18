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

int main(){
   int n[TAM] = {4, 5, 8, 2, 9, 1 , 3, 7, 6}, i;

   printf("Orden atual dos itens:\n");
   for(i = 0; i < TAM; i++){
        printf("%4d", n[i]);
   }

   bs(n, TAM);
   //is(n, TAM);
   //ss(n, TAM);

   printf("\nElementos em ordem crescente:\n");
   for(i = 0; i < TAM; i++){
        printf("%4d", n[i]);
   }
   return 0;
}
