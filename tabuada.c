#include <stdio.h>
#include <stdlib.h>
main(){
    int num;
    int  i;
    printf("Digite um numero inteiro: \n");
    scanf("%d" ,&num);
    for(i=0;i<=10;i++){
        printf("%d x %d =%d \n ",num,i, num *i);
    }


}