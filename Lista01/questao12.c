#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

void inq12(float *n1,float *n2){
    printf("digite a 1o nota: \n");
    scanf("%f",n1);
    printf("digite a 2o nota: \n");
    scanf("%f",n2);
}
void proq12(float *n1,float *n2,float *m){
    *m = (*n1 + *n2) / 2.0;
}
void outq12(float m){
    if(m >= 7.0){
        printf("o aluno esta aprovado\n");
    }else{
        printf("o aluno foi reprovado\n");
    }
}
void questao12(void){
    float a,b,c;

    inq12(&a,&b);
    proq12(&a,&b,&c);
    outq12(c);
}

