#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void inq5(float *sl,int *d){
    printf("salario base: \n");
    scanf("%f",sl);
    printf("dependentes: \n");
    scanf("%d",d);
}
void proq5(float *sl,int *d,float *sb){
    *sb=*sl+((*d)*32.0);
    *sb-=((*sb)*27.5)/100.0;
}
void outq5(float sb){
    printf("salario bruto: %.2f\n", sb);
}
void questao05(void){
    float a,b,c;

    inq5(&a,&b);
    proq5(&a,&b,&c);
    outq5(c);
}

