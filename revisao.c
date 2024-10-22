#include <stdio.h>
#include <stdlib.h>

int teste_par(int i);

main(){
    int numero;
    printf("Digite um número inteiro \n" );
    scanf("%d", &numero);
    teste_par(numero);
}
int teste_par(int i){
    if(i%2==0){
printf("O número é par!");
    }
else{
    printf("O número é ímpar!");
    }
}
