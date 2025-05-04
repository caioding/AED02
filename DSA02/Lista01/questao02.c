#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void ent(float *n1,float *n2,float *n3,float *n4){
    printf("Digite o 1o numero: \n");
    scanf("%f",n1);
    printf("Digite o 2o numero: \n");
    scanf("%f",n2);
    printf("Digite o 3o numero: \n");
    scanf("%f",n3);
    printf("Digite o 4o numero: \n");
    scanf("%f",n4);
}
void proc(float *n1,float *n2,float *n3,float *n4,float *media){
    *media=(*n1+*n2+*n3+*n4)/4.0;
}
void sai(float media){
    printf("media eh: %.2f\n", media);
}
void questao02(void){
    float a,b,c,d,m;

    ent(&a,&b,&c,&d);
    proc(&a,&b,&c,&d,&m);
    sai(m);
}
