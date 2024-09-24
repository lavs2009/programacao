#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    int i;
    int num;
    int maior;
   printf("Digite 10 valores: \n");
   for( i=0 ;i< 10; i++)
{
    scanf("%d" ,&num);
    if(num>maior)
    maior=num;
}
printf("O número maior é:%d \n",maior);
    
}
