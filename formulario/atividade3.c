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