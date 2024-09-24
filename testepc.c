/*fazer uma calculadora*/
#include <stdio.h>
#include <stdlib.h>
main (){
    int opcao = 0, numero1 = 0, numero2 = 0;
    printf("Digite dois números:\n");

    scanf("%d" ,&numero1);
    scanf("%d",&numero2);
    printf("Escolha uma opção abaixo: \n");
    printf("1 - soma\n 2 - subtração\n 3 - multiplica\n 4 - divisão\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: printf("A soma entre os números é %d",numero1+numero2);
        break;
        case 2: printf("A diferença entre os números é %d",numero1-numero2);
        break;
        case 3: printf(" O produto entre números é %d",numero1*numero2);
        break;
        case 4: printf("A divisão entre os  números é %d",numero1/numero2);
        break;
        default: printf("Opção inválida!");
    }
}
