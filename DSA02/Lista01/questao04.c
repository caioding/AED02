#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void inq4(float *sa,float *p){
    printf("salario antigo: \n");
    scanf("%f",sa);
    printf("porcentagem: \n");
    scanf("%f",p);
}
void proq4(float *sa,float *p,float *sn){
    *sn=*sa+((*sa)*(*p))/100.0;
}
void outq4(float sn){
    printf("salario novo: %.2f\n", sn);
}
void questao04(void){
    float a,b,c;

    inq4(&a,&b);
    proq4(&a,&b,&c);
    outq4(c);
}
