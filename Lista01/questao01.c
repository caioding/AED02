#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada(int *n1,int *n2,int *n3){
    printf("Digite o 1o numero: \n");
    scanf("%d",n1);
    printf("Digite o 2o numero: \n");
    scanf("%d",n2);
    printf("Digite o 3o numero: \n");
    scanf("%d",n3);
}
void processamento(int *n1,int *n2,int *n3,int *soma){
    *soma=*n1+*n2+*n3;
}
void saida(int soma){
    printf("soma eh: %d\n", soma);
}
void questao01(void){
    int a,b,c,s;

    entrada(&a,&b,&c);
    processamento(&a,&b,&c,&s);
    saida(s);
}
