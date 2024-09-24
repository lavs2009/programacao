#include <stdio.h>
#include <stdlib.h>
main (){
    char nome;
    char telefone;
    char endereco;
   
       printf("Digite seu nome");
       scanf("%s" ,&nome);
       printf("Digite seu telefone");
       scanf("%s" ,&telefone);
       printf("Digite seu endereco");
       scanf("%s" ,&endereco);

    printf("O nome e: %s" ,nome);
    printf("O telefone e: %s" ,telefone);
    printf("O endereco e: %s" ,endereco);
    
}