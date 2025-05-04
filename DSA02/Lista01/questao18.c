#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void iq18(float *m1,float *m2){
    printf("1o media: \n");
    scanf("%f",m1);
    printf("2o media: \n");
    scanf("%f",m2);
}
void pq18(float *m1,float *m2,float *mf){
    *mf = (*m1 + *m2) / 2.0;
    }
void oq18(float mf){
    if(mf >= 7){
        printf("media eh: %.2f, aluno aprovado\n",mf);
    }else if(mf < 3){
        printf("media eh: %.2f, aluno reprovado\n",mf);
    }else{
        printf("media eh: %.2f, aluno em prova final\n",mf);
    }
}
void questao18(void){
    float a,b,c;

    iq18(&a,&b);
    pq18(&a,&b,&c);
    oq18(c);
}
