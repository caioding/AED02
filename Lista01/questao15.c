#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void iq15(int *n1,int n2){
    printf("digite um numero: \n");
    scanf("%d",n1);
    printf("digite o 2o numero: \n");
    scanf("%d",n2);
}
void pq15(int *n1,int *n2){
    if(*n1 > *n2){
        printf("o 1o numero, %d, eh maior\n",*n1);
    }else if(*n1 == *n2){
        printf("os valores sao iguais\n");
    }else{
        printf("o 2o numero, %d, eh maior\n",*n2);
    }
}
void questao15(void){
    int a,b;

    iq15(&a,&b);
    pq15(&a,&b);
}

