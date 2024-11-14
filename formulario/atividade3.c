/* Fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento,
 solicita a opção desejada e imprime o valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto (valor*0.9)

2) Opção: em duas vezes (preço da etiqueta) (valor/c)

3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00). ((valor*1.03)/parcelas)

OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida.
 No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção).*/
#include <stdio.h>
#include <stdlib.h>
int opcoes(){
    int opcao;
    printf("MODO DE PAGAMENTO: \n");
    printf("1 - A VISTA \n");
    printf("2 - 2 VEZES \n");
    printf("3 - 3 VEZES \n");
    scanf("%d", &opcao);
    printf("\n\n");
    return(opcao);
}

float aVista(float valor){
    printf("TOTl : R$ %.2f \n", valor);
    printf("TOTAL A PAGAR: R$ %.2f \n", valor );
    return(0);
}

float duasVezes(float valor){
    printf("TOTAL: R$ %.2f \n", valor);
    printf("2 PARCELAS DE R$ %.2f CADA\n", (valor/2));
    return(0);
}

float tresVezes(float valor){
    int parcelas;
    printf("TOTAL  : R$ %.2f \n" ,valor);
    printf("Quantidade de parcelas: \n");
    scanf("%d",&parcelas);
    printf("%d PARCELAS DE R$ %.2f CADA\n",parcelas, (valor * 1.03)/parcelas);
    return(0);
}

  int main(){
float valorCompra;
   printf("Entre com o TOTAL DA COMPRA: \n");
    scanf("%f" ,&valorCompra);
    printf("\n\n");
    switch(opcoes()){
        case 1:
        printf("PAGAMENTO A VISTA: \n");
        aVista(valorCompra);
        break;

        case 2:
        printf("PAGAMENTO 2X: \n");
         duasVezes(valorCompra);
         break;

         case 3:
          printf("PAGAMENTO 3X: \n");
         tresVezes(valorCompra);
         break;
         default:
         printf("Opção inválida");
    }
  }