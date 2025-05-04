#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void i24(int *vc, int *vp){
    printf("valor da compra: \n");
    scanf("%d",vc);
    printf("valor pagamento: \n");
    scanf("%d",vp);
}
void p24(int *vc, int *vp, int *troco, int *n100, int *n10, int *n1){
    if(*vp < *vc){
        printf("pagamento negado");
    }else{
        *troco = *vp - *vc;
        *n100 = *troco / 100;
        *troco -= (*n100) * 100;
        *n10 = *troco / 10;
        *troco -= (*n10) * 10;
        *n1 = *troco / 1;
        printf("troco %d notas de 100 reais\n",*n100);
        printf("troco %d notas de 10 reais\n",*n10);
        printf("troco %d notas de 1 real\n",*n1);
    }
}
void questao24(void){
    int a,b,c,d,e,f;

    i24(&a,&b);
    p24(&a,&b,&c,&d,&e,&f);
}
