#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void inq9(int *n){
    printf("digite numero: \n");
    scanf("%d",n);
}
void proq9(int *n){
    if(*n>100){
        printf("o numero eh maior que 100\n");
    }else if(*n==100){
        printf("o numero eh igual 100\n");
    }else{
        printf("o numero eh menor que 100\n");
    }
}
void questao09(void){
    int a;

    inq9(&a);
    proq9(&a);
}

