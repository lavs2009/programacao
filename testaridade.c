#include <stdio.h>
#include <stdlib.h>
main(){
    int cont;
    printf("IMPARES \t PARES\n");
    for(cont=1;cont<=100;cont++){
        if(cont%2!=0)
        printf(" %d \t", cont);
        else
        printf(" %d \n", cont);


    }
}



