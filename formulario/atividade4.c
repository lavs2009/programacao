/* Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for,
 multiplica cada elemento por 5, imprime os valores originais e imprime o resultado. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriz[3][3];
    for(int i = 0; i < 3 ; i++) {
      for(int j = 0; j < 3; j++) {
     
      
      printf("Informe o valor na posicao %d %d: \n",i,j);
      scanf("%d", &matriz[i][j]);
    }
}
 for(int i = 0; i < 3 ; i++) {
      for(int j = 0; j < 3; j++) {
     
      
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
}

 for(int i = 0; i < 3 ; i++) {
      for(int j = 0; j < 3; j++) {
     
      
      printf(" %d", matriz[i][j]*5);
    }
    printf("\n");
}
}