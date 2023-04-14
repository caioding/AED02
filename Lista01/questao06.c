#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void inq6(float *va,float *vn){
    printf("valor antigo: \n");
    scanf("%f",va);
    printf("valor novo: \n");
    scanf("%f",vn);
}
void proq6(float *va,float *vn,float *ap){
    *ap=((*vn-*va) / *va)*100;
}
void outq6(float ap){
    printf("aumento porcentagem: %.2f\n", ap);
}
void questao06(void){
    float a,b,c;

    inq6(&a,&b);
    proq6(&a,&b,&c);
    outq6(c);
}

