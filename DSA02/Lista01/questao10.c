#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao10.h"

void iq10(char **s){
    printf("Digite a senha: \n");
	scanf("%s",s);
}
void pq10(char **s){
    char *sc = "LINGUAGEMC";
    if(strcmpi(s,sc)== 0){
		printf("Senha correta\n");
	}else{
		printf("Senha errada\n");
	}
}
void questao10(void){
    char a,b;

    iq10(&a);
    pq10(&a);
}
