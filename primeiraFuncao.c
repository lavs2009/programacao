#include <stdio.h>
#include <stdlib.h>

int sqr(int);
int dobro(int);
int triplo(int);

int main(){//se for menor que 0 eleva ao quadrado
//se for par,mostra o dobro do número
// se for ímpar,mostra o triplo.
int numero = 0;
printf("Digite um número inteiro;\n");
scanf("%d", &numero);

if(numero < 0){
sqr(numero);
}
else if( numero%2 == 0){
    dobro(numero);
}
else{
triplo(numero);
}
return 0;
}
int sqr(int numero){
//calcule o quadrado do número
int x = numero;
printf("O quadrado do número é: %d\n", x*x);
return(0);
}
int dobro( int numero){
int x = numero;
printf("O dobro do número é:  %d\n", 2*x);
return(0);
}
int triplo(int numero){
int x = numero;
printf("O triplo do número é: %d\n", 3*x);
return(0);
}