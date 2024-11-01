#include <stdio.h>
#include <stdlib.h>
main(){
   int i;
     printf("Números Pares:\n \t");
    for (int i = 0; i <= 1000; i += 2) {
        printf("%d ", i);
    }

    printf("\n\tNúmeros Ímpares:\n \t");
    for (int i = 1; i < 1000; i += 2) {
        printf("%d ", i);
    }

    return 0;
}