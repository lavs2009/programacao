/* 1- Elabore um programa que peça seu nome,
endereço, telefone, CEP. O programa deve imprimir
o seu nome completo,CEP, eo telefone na terceira linha.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
    char nome[50], endereco[50];
    char cep[9], telefone[15];
    printf("Digite o seu nome completo:\n");
    gets(nome);
    printf("Digite o seu endereço:\n");
    gets(endereco);
    printf("Digite o seu telefone:\n");
    scanf("%s", &telefone);
    printf("Digite o seu CEP:\n");
    scanf("%s", &cep);

    printf("Nome Completo:%s\n", nome);
    printf("Endereço:%s\n", endereco);
    printf("Telefone::%s\t", telefone);
    printf("CEP:%s\n", cep);
    printf("Cadastro realizado com sucesso!");
}