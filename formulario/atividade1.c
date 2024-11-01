#include <stdio.h>
#include <stdlib.h>
main(){
     int i;
    int num;
    int maior = 0;
    int menor;
   printf("Digite 10 valores: \n");
   for( i=0 ;i<10; i++)
{
    scanf("%d" ,&num);
    if(num>maior)
    maior=num;

    else if (num<menor)
    menor=num;
}

printf("O número maior é:%d \n",maior);

    printf("O número menor é:%d \n",menor);
}