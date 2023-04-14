#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void iq14(int *n){
    printf("digite um numero: \n");
    scanf("%d",n);
}
void pq14(int *n){
    if((*n % 2) == 0){
        printf("o numero eh par");
    }else{
        printf("o numero eh impar");
    }
}
void questao14(void){
    int a;

    iq14(&a);
    pq14(&a);
}

