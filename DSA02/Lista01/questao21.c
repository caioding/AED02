#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void iq21(float *n1,float *n2,float *n3){
    printf("digite um numero: \n");
    scanf("%f",n1);
    printf("digite 2o numero: \n");
    scanf("%f",n2);
    printf("digite o 3o numero: \n");
    scanf("%f",n3);
}
void pq21(float *n1,float *n2,float *n3,float *maior, float *medio,float *menor){
    if(*n1 > *n2 && *n2 > *n3){
        *maior = *n1;
        *medio = *n2;
        *menor = *n3;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*n1,*n2,*n3);
    }else if(*n1 > *n3 && *n3 > *n2){
        *maior = *n1;
        *medio = *n3;
        *menor = *n2;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*n1,*n3,*n2);
    }else if(*n2 > *n1 && *n1 > *n3){
        *maior = *n2;
        *medio = *n1;
        *menor = *n3;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*n2,*n1,*n3);
    }else if(*n2 > *n3 && *n3 > *n1){
        *maior = *n2;
        *medio = *n3;
        *menor = *n1;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*n2,*n3,*n1);
    }else if(*n3 > *n1 && *n1 > *n2){
        *maior = *n3;
        *medio = *n1;
        *menor = *n2;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*n3,*n1,*n2);
    }else if(*n3 > *n2 && *n2 > *n1){
        *maior = *n3;
        *medio = *n2;
        *menor = *n1;
        printf("maior: %.2f, medio: %.2f, menor: %.2f\n",*n3,*n2,*n1);
    }else{
        printf("os numero sao iguais: %.2f, %.2f e %.2f\n",*n1,*n2,*n3);
    }
}
void questao21(void){
    float a,b,c,d,e,f;

    iq21(&a,&b,&c);
    pq21(&a,&b,&c,&d,&e,&f);
}
