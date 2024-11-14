/*Faça um algoritmo que mostre todos os números pares e ímpares até 1000*/
#include <stdio.h>
#include <stdlib.h>
main(){
   int cont;
     printf("ÍMPARES\tPARES\n");
    for (cont = 1; cont <= 1000; cont++) {
       if(cont%2!=0)
       printf("%d\t", cont);
       else
       printf("%d\n", cont);
    }
}
