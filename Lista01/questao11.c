#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

void inq11(int *n){
    printf("digite numero: \n");
    scanf("%d",n);
}
void proq11(int *n){
    if(*n>=100 && *n<=500){
        printf("o numero esta entre 100 e 500\n");
    }else{
        printf("o numero nao esta entre 100 e 500\n");
    }
}
void questao11(void){
    int a;

    inq11(&a);
    proq11(&a);
}

