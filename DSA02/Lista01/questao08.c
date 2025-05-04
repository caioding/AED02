#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void inq8(float *km){
    printf("quilometro por hora: \n");
    scanf("%f",km);
}
void proq8(float *km,float *ms){
    *ms = (*km) / 3.6;
}
void outq8(float ms){
    printf("metros por segundo: %.2f\n", ms);
}
void questao08(void){
    float a,b;

    inq8(&a);
    proq8(&a,&b);
    outq8(b);
}

