/* 1-Crie um prgrama que dê uma mensagem de boas vindas aos aulnos.
2-Pedir para o aluno digitar o nome
Pedir ao aluno para digitar o nome antes de desejar boas vindas
 e mostre a mensagem com o nome dele.
3-Pedir ao aluno para digitar as notas de 04 avaliações,
 somar e calcular a média.*/

/*MEDIA:é soma dividido por 4*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float main()
{
    char nome;
    float media, nt1, nt2, nt3, nt4;
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Bem vindo %s!\n", &nome);

    printf("Digite a nota 1:\n");
    scanf("%f", &nt1);
    printf("Digite a nota 2:\n");
    scanf("%f", &nt2);
    printf("Digite a nota 3: \n");
    scanf("%f", &nt3);
    printf("Digite a nota 4:\n");
    scanf("%f", &nt4);
    media = (nt1 + nt2 + nt3 + nt4) / 4;
    printf("A média e: %.2f \n", media);
   
    /*4- Verificar e informar se o aluno foi aprovado ou reprovado.
    Se a média for menor que 6, o aluno foi
    reprovado. Se for maior ou igual a 6, foi aprovado.*/
    if(media<6) 
    printf(" Você foi reprovado!");
    else{ 
        printf("Você foi aprovado!");
        return 0;
    }
}