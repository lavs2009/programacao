/*Criar um programa que calcule o salário a receber de um funcionário de uma empresa.
O programa deverá perguntar o número de horas trabalhadas e calcular, sabendo que o valor
por hora é 110,00. Se o total for menor que 1 salário mínimo, atribuir o valor do 
salário mínimo(1412,00).Descontar 11% da contríbuição previdenciária;
Ao final, mostrar o valor a receber.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    float calcula_salario(float horas){
        float salario_bruto, cont_prev, salario_liquido;
        salario_bruto = horas * 110.00;
        if(salario_bruto<1412.00)
        {
            salario_bruto = 1412.00;
         }
 cont_prev = salario_bruto * 0.11;
 salario_liquido = salario_bruto - cont_prev;
 printf("Valor a receber e : %.2f", salario_liquido);
 return(0);
    }
int main(){
    char nome_funcionario[50];
    float horas;
    printf("Digite o nome do funcionário: \n");
gets(nome_funcionario);
printf("Quantidade de horas trabalhadas: \n");
scanf("%d", &horas);
calcula_salario(horas);
}