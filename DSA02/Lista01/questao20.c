#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void iq20(float *n1,float *n2,float *n3){
    printf("digite um numero: \n");
    scanf("%f",n1);
    printf("digite 2o numero: \n");
    scanf("%f",n2);
    printf("digite o 3o numero: \n");
    scanf("%f",n3);
}
void pq20(float *n1,float *n2,float *n3){
    if(*n1 > *n2 && *n1 > *n3){
        printf("%.2f eh o maior dos tres\n",*n1);
    }else if(*n2 > *n1 && *n2 > *n3){
        printf("%.2f eh o maior dos tres\n",*n2);
    }else if(*n3 > *n1 && *n3 > *n2){
        printf("%.2f eh o maior dos tres\n",*n3);
    }else if(*n1 == *n2 && *n2 == *n3){
        printf("Numero identicos\n");
    }
}
void questao20(void){
    float a,b,c;

    iq20(&a,&b,&c);
    pq20(&a,&b,&c);
}
