#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void iq16(float *sb){
    printf("digite o salario bruto: \n");
    scanf("%f",sb);
}
void pq16(float *sb, float *sl){
    if(*sb < 2000){
        *sl = ((*sb) * 0.90);
    }else{
        *sl = ((*sb) * 0.80);
    }
}
void oq16(float sl){
    printf("o salario eh: %g\n", sl);
}
void questao16(void){
    float a,b;

    iq16(&a);
    pq16(&a,&b);
    oq16(b);
}

