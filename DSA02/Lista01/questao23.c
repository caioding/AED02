#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "questao23.h"

void i23(float *p, char *t){
    printf("Entre com o percuso em Km: ");
    scanf("%f", p);
    printf("Entre com o tipo do carro [A, B, C]: ");
    scanf("%s", t);
}
void p23(float *p, char *t, float *c){
    *t = tolower(*t);

    switch(*t){
        case 'a':
            *c = *p / 8.0;
            printf("\nO carro consumiu %g litros de combustivel\n", *c);
            break;
        case 'b':
           *c = *p / 9.0;
           printf("\nO carro consumiu %g litros de combustivel\n", *c);
           break;
        case 'c':
           *c = *p / 12.0;
            printf("\nO carro consumiu %g litros de combustivel\n", *c);
            break;
        default:
            printf("\nTipo de carro invalido!!\n");
    }
}
void questao23(){
    char c[50];
    float a, b;

    i23(&a,&c);
    p23(&a,&c,&b);
}
