#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void inq13(int *n){
    printf("digite um numero: \n");
    scanf("%d",n);
}
void proq13(int *n){
    if((*n % 5) == 0){
        printf("o numero eh divisivel por 5");
    }else{
        printf("o numero nao eh divisivel por 5");
    }
}
void questao13(void){
    int a;

    inq13(&a);
    proq13(&a);
}

