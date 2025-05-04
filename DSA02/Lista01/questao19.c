#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void iq19(float *l1,float *l2,float *l3){
    printf("lado um: \n");
    scanf("%f",l1);
    printf("lado 2: \n");
    scanf("%f",l2);
    printf("lado 3: \n");
    scanf("%f",l3);
}
void pq19(float *l1,float *l2,float *l3){
    if(*l1 == *l2 && *l2 == *l3){
        printf("triangulo equilatero");
    }else if(*l1 == *l2 || *l1 == *l3 || *l2 == *l3){
        printf("triangulo isoceles");
    }else{
        printf("triangulo escaleno");
    }
}
void questao19(void){
    float a,b,c;

    iq19(&a,&b,&c);
    pq19(&a,&b,&c);
}
