#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void iq17(float *vp){
    printf("valor do produto: \n");
    scanf("%f",vp);
}
void pq17(float *vp){
    if(*vp < 200){
        *vp += ((*vp) * 0.50);
    }else{
        *vp += ((*vp) * 0.30);
    }
}
void oq17(float vp){
    printf("valor venda eh: %g\n", vp);
}
void questao17(void){
    float a,b;

    iq17(&a);
    pq17(&a);
    oq17(a);
}

