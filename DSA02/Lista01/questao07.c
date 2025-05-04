#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"

void inq7(float *r){
    printf("raio: \n");
    scanf("%f",r);
}
void proq7(float *r,float *p,float *a,float *d,float *v){
    *p= (2.0 * 3.14) * (*r);
    *a= 3.14 * ((*r)*(*r));
    *d= 2.0 * (*r);
    *v= ((4.0 * 3.14)/3.0) * ((*r)*(*r)*(*r));
}
void outq7(float p,float a, float d,float v){
    printf("perimetro: %.2f\n", p);
    printf("area: %.2f\n", a);
    printf("diametro: %.2f\n", d);
    printf("volume: %.2f\n", v);
}
void questao07(void){
    float a,b,c,d,e;

    inq7(&a);
    proq7(&a,&b,&c,&d,&e);
    outq7(b,c,d,e);
}

