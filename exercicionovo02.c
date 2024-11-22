/*2- Faça um programa que leia dois números inteiros e
mostre se o primeiro é múltiplo do segundo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0)
    {
        printf("%d é múltiplo de %d.\n", num1, num2);
    }
    else
    {
        printf("%d não é múltiplo de %d.\n", num1, num2);
    }

    return 0;
}