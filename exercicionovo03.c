/*3- Faça um programa que leia um número e diga se ele é múltiplo de 6.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 6 == 0)
    {
        printf("O numero %d e multiplo de 6.\n", numero);
    }
    else
    {
        printf("O numero %d nao e multiplo de 6.\n", numero);
    }

    return 0;
}