#include <stdio.h>
#include <stdlib.h>
main (){
    int i;
   int num;
   int maior = 0;
    printf("Digite 5 valores: \n");
    for( i=0 ;i< 5; i++)
    {
        scanf("%d",&num);
        if(num>maior)
        maior=num;
    }
    printf("O número maior é:%d \n",maior);
    }
