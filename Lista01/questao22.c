#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void i22(char *n[20], int *e, int *v){
    printf("digite o municipio: \n");
    scanf("%s",n);
    printf("digite a quantidade de eleitores: \n");
    scanf("%d",e);
}
void p22(char *n, int *e, int *v){
    if(*e <= 200000){
        printf("a cidade %s nao tera 2o turno\n",n);
    }else{
        printf("votos do candidatos mais votado\n");
        scanf("%d",v);
        if(*v <= *e/2){
            printf("a cidade %s tera 2o turno\n",n);
        }else{
            printf("a cidade %s nao tera 2o turno\n",n);
        }
    }
}
void questao22(void){
    int a,b,c;

    i22(&a,&b,&c);
    p22(&a,&b,&c);
}
