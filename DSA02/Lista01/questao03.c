#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void inq3(float *n1,float *n2,float *p1,float *p2){
    printf("Digite a 1o nota: \n");
    scanf("%f",n1);
    printf("Digite o peso da 1o nota: \n");
    scanf("%f",p1);
    printf("Digite a 2o nota: \n");
    scanf("%f",n2);
    printf("Digite o peso da 2o nota: \n");
    scanf("%f",p2);
}
void proq3(float *n1,float *n2,float *p1,float *p2,float *media){
    *media=((*n1)*(*p1)+(*n2)*(*p2))/(*p1+*p2);
}
void outq3(float media){
    printf("media eh: %.2f\n", media);
}
void questao03(void){
    float a,b,c,d,m;

    inq3(&a,&b,&c,&d);
    proq3(&a,&b,&c,&d,&m);
    outq3(m);
}
