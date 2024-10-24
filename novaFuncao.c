
/*Criar um arquivo de calculadora utilizando o comando switch.
CRIAR:
uma função para soma
uma função para subtração
uma função para multiplicação
uma função para divisão
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int soma(int,int);
int subtrai(int,int);
int multi(int,int);
float divisao(int,int);

int main(){
 int n1 = 0, n2 = 0, op = 0;
  int recebe_numero(n1,n2);
 printf("Digite dois números:\n");

    scanf("%d" ,&n1);
    scanf("%d",&n2);
    printf("Escolha uma opção abaixo: \n");
    printf("1 - soma\n 2 - subtração\n 3 - multiplica\n 4 - divisão\n");
    scanf("%d", &op);
    switch(op){
        case 1: soma(n1, n2);
        break;
        case 2: subtrai(n1,n2);
        break;
        case 3: multi(n1,n2);
        break;
        case 4: divisao(n1,n2);
        break;
        default: printf("Opção inválida!");
    }
    return(0);
}
 int soma(int n1, int n2){
   int resultado;
   resultado= n1+n2;
    printf("A soma dos dois números e: %d" ,resultado);
   return(resultado);
 }
  int subtrai(int n1, int n2){
   int resultado;
   resultado= n1-n2;
    printf("A subtração dos dois números e: %d" ,resultado);
   return(resultado);
 }
 int multi(int n1, int n2){
   int resultado;
   resultado= n1*n2;
    printf("A multiplicação dos dois números e: %d" ,resultado);
   return(resultado);
 }
 float divisao(int n1, int n2){
   float resultado;
   resultado= n1/n2;
    printf("A divisão dos dois números e: %.2f" ,resultado);
   return(resultado);
 }





