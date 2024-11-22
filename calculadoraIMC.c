/*1- Solicitar ao usuário que digite o seu peso e sua altura
2- Calcular e armazenar o IMC da pessoa, sabendo que o cálculo
é: (peso/(altura*altura)
3- Comparar o IMC e devolver uma mensagem para o usuário, de
acordo com o seu IMC:
    -> 18,5 ou menos = Abaixo do normal = Procure um médico.
    Algumas pessoas têm um baixo peso por características do
    seu organismo e tudo bem. Outras podem estar enfrentando
    problemas, como a desnutrição. É preciso saber qual é o
    caso.
    -> Entre 18,6 e 24,9 = Normal = Que bom que você está com
    o peso normal! E o melhor jeito de continuar assim é
    mantendo um estilo de vida ativo e uma alimentação
    equilibrada.
    -> Entre 25,0 e 29,9 = Sobrepeso = Ele é, na verdade, uma
    pré-obesidade e muitas pessoas nessa faixa já apresentam
    doenças associadas, como diabetes e hipertensão. Importante
    rever hábitos e buscar ajuda antes de, por uma série de
    fatores, entrar na faixa da obesidade pra valer.
    -> Entre 30,0 e 34,9 = Obesidade grau I = Sinal de alerta!
    Chegou na hora de se cuidar, mesmo que seus exames sejam
    normais. Vamos dar início a mudanças hoje! Cuide de sua
    alimentação. Você precisa iniciar um acompanhamento com
    nutricionista e/ou endocrinologista.
    -> Entre 35,0 e 39,9 = Obesidade grau II = Mesmo que seus
    exames aparentem estar normais, é hora de se cuidar,
    iniciando mudanças no estilo de vida com o acompanhamento
    próximo de profissionais de saúde.
    ->Acima de 40,0 = Obesidade grau III = Aqui o sinal é
    vermelho, com forte probabilidade de já existirem doenças
    muito graves associadas. O tratamento deve ser ainda mais
    urgente*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float calcularIMC(float peso, float altura)
{
    float imc = 0;
    imc = peso / (altura * altura);
    return (imc);
}

float mensagemAdulto(float imc)
{
    printf("Seu IMC e: %f", imc);
    if (imc <= 18.5)
    {
        printf("****** IMC -> Abaixo do normal = \nProcure um médico! ******");
    }
    else if (imc > 18.5 && imc < 24.9)
    {
        printf("****** IMC -> Normal = \nQue bom que voce esta com o peso normal! ******");
    }
    else if (imc > 24.9 && imc <= 29.9)
    {
        printf(" Voce esta com sobrepeso\nna na verdade, uma pré-obesidade \n ");
    }
    else if (imc > 29.9 && imc <= 34.9){
        printf("****** Voce esta com obesidade grau I = Sinal de alerta!\nChegou na hora de se cuidar");
    }
    else if (imc > 34 && imc <= 39.9){
        printf("****** Voce esta com obesidade grau II \nMesmo que seus exames aparentem estar normais, é hora de se cuidar");
    }
    else{
        printf("Voce esta com obesidade grau III = Aqui o sinal é vermelho com forte probabilidade"
        "de já existirem doenças muito graves.O tratamento deve ser ainda mais urgente!\n");
    }
    return 0;
}

float mensagemCrianca(float imc)
{
    printf("Seu IMC e: %2.f", imc);

    if (imc < -2)
    {
        printf(" Abaixo do normal = Procure um médico! ******");
    }
    else if (imc > -2 && imc < 1)
    {
        printf("Normal = Que bom que voce esta com o peso normal! ******");
    }
    else if (imc >= 1 && imc < 2 )
    {
        printf(" Voce esta com sobrepeso\nna na verdade, uma pré-obesidade \n ");
    }
    else 
        printf("Voce esta com obesidade grau I = Sinal de alerta!\nChegou na hora de se cuidar");
        return 0;
    }

int main()
{
    int idade = 0;
    float peso = 0, altura = 0, imc = 0;
    printf("********************************* \n");
    printf("\nOla! A obesiade e uma condicao");
    printf("\nmedica caracterizada pelo excesso");
    printf("\nde gordura que ter efeitos");
    printf("\nnegativos na saude. Vamos calcular o seu IMC? \n");
    printf("********************************* \n");
    printf("Digite sua idade; \n");
    scanf("%d", &idade);
    printf("Digite seu peso em quilogramas: \n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: \n");
    scanf("%f", &altura);
    imc = calcularIMC(peso, altura);

    if (idade >= 19)
    {
        mensagemAdulto(imc);
    }
    else
        mensagemCrianca(imc);
    return 0;
}