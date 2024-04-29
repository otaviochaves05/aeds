#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();


int main()
{
    setlocale(LC_ALL,"portuguese");

    //ex01();
    ex02();
    //ex03();
    //ex04();

    return 0;
}

int ex01()
{
    int idade;
    printf("Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa é ou não maior de idade. A maioridade se estabelece ao alcançar 18 anos.\n");
    printf("digite sua idade: ");
    scanf("%d",&idade);

    if(idade<18)
    {
        printf("menor de idade.\n");
    }
    else
    {
        printf("maior de idade.");
    }
    return 0;
}

int ex02()
{
    int num;
    printf("Escreve um programa que leia um número e diga se esse número é par ou ímpar.\n");
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("o numero é par.");
    }
    else
    {
        printf("o numero é impar.");
    }
    return 0;
}

int ex03()
{
    int codigo;
    printf("Digite o codigo do item: ");
    scanf("%d",&codigo);
    if(codigo>5)
    {
        printf("codigo invalido");
    }
     if(codigo=1){
        printf("Hambúrguer............... R$ 30,00");
    }
     if(codigo=2){
        printf("Cheeseburger.............. R$ 35,50");
    }
     if(codigo=3){
        printf("Fritas............................ R$ 20,50");
    }
     if(codigo=4){
        printf("Refrigerante................. R$ 10,00");
    }
     if(codigo=5){
        printf(" Milkshake..................... R$ 30,00");
    }
    return 0;
}
