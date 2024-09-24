#include <stdio.h>
#include <stdlib.h>
main(){
    int idade = 0;
   printf("Digite sua idade:\n");
scanf("%d",&idade);
switch(idade){
case 0 ... 11:
printf("Você é uma criança!");
break;
case 12 ... 17:
printf("Você é um adolescente!");
break;
case 18 ... 64:
printf("Você é um adulto!");
break;
case 65 ... 150:
printf("Você é um idoso!");
break;

default: printf("Opção inválida!");
}
}
 
