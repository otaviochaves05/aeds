#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();
int ex11();
int ex12();
int ex13();
int ex14();
int ex15();

int main()
{
    setlocale(LC_ALL,"portuguese");
    //ex01();
    //ex02();
    //ex03();
    //ex04();
    //ex05();
    //ex06();
    //ex07();
    //ex08();
    //ex09();
    //ex10();
    //ex11();
    //ex12();
    //ex13();
    //ex14();
    //ex15();
}

int ex01()
{
    int num,resp;

    printf("01.)Ler um valor inteiro do teclado e imprima 0 se for par ou 1 se for impar \n");

    printf("digite um numero\n");
    scanf("%i",&num);
    resp=num%2;
    printf("resp= %i\n",resp);

    return 0;
}

int ex02()
{
    int num;
    bool resposta;
    printf("02.)Ler um valor inteiro do teclado e imprima 1 se for múltiplo de 3 ou 0 se não for \n");

    printf("digite um numero\n");
    scanf("%i",&num);
    resposta=(num%3 ==0);
    printf("%i",resposta);

    return 0;

}

int ex03()
{

    int num;
    bool resposta;

    printf("03.)ler um valor inteiro do teclado e imprimir 1 se ímpar e maior que 100, ou 0 caso contrário.\n");
    printf("digite um numero\n");
    scanf("%i",&num);
    resposta=(num%2!=0 && num>100);
    printf("%i",resposta);
    return 0;

}

int ex04()
{

    int num;
    bool resposta;

    printf("04.)ler um valor inteiro do teclado e imprimir 1 se é par e menor que 100, ou ímpar e maior que 100, imprima 0 caso contrário.\n");
    printf("digite um numero\n");
    scanf("%i",&num);
    resposta=(num%2==0 && num<100)||(num%2!=0 && num>100);
    printf("%i",resposta);
    return 0;

}

int ex05()
{
    int num;
    bool resposta;

    printf(" 05.) ler um valor inteiro do teclado e imprimir 1 se pertence ao intervalo aberto entre (25:75), e imprimir 0 caso não pertença.\n");
    printf("digite um numero\n");
    scanf("%i",&num);
    resposta=(num>25 && num<75);
    printf("%i",resposta);
    return 0;
}

int ex06()
{
    int num;
    bool resposta;

    printf(" 06.) ler um valor inteiro do teclado e imprimir 1 se pertence ao intervalo fechado ntre [25:75], e imprimir 0 caso não pertença.\n");
    printf("digite um numero\n");
    scanf("%i",&num);
    resposta=(num>=25 && num<=75);
    printf("%i",resposta);
    return 0;

}

int ex07()
{
    int num;
    bool resposta;

    printf(" 07.) ler um valor inteiro do teclado e imprimir 1 se pertence aos intervalos fechados [15:45] ou [66:99], e imprimir 0 caso não pertença\n");
    printf("digite um numero\n");
    scanf("%i",&num);
    resposta=(num>=15 && num<=45)||(num>=66 && num<=99);
    printf("%i",resposta);
    return 0;

}

int ex08()
{
    int num1,num2;
    bool resposta;

    printf("  08.) ler dois valores inteiros do teclado e imprimir 1 se o primeiro é par e o segundo é ímpar, e imprimir 0 caso não seja.\n");
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);
     printf("digite o segundo numero\n");
    scanf("%i",&num2);
    resposta=(num1%2==0 && num2%2!=0);
    printf("%i",resposta);
    return 0;

}

int ex09()
{
    int num1,num2;
    bool resposta;

    printf("  09.)ler dois valores inteiros do teclado e imprimir 1 se o primeiro é par e positivo, e o segundo é ímpar e negativo, e imprimir 0 caso não satisfaça a condição.\n");
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);
    printf("digite o segundo numero\n");
    scanf("%i",&num2);
    resposta=(num1%2==0 && num1>0)&&(num2%2!=0 && num2<0);
    printf("%i",resposta);
    return 0;

}

int ex10()
{
    int num1,num2;
    bool resposta;

    printf(" 10.) ler dois valores reais do teclado e imprimir 1 se o primeiro é maior, menor ou igual ao segundo, e imprimir 0 caso não seja.\n");
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);
    printf("digite o segundo numero\n");
    scanf("%i",&num2);
    resposta=(num1>num2 && num1<num2) & (num1==num2);
    printf("%i",resposta);
    return 0;

}

int ex11()
{
    int num1,num2,num3;
    bool resposta;

    printf(" 11.) ler três valores reais do teclado e imprimir 1 se o primeiro está entre os outros dois, e imprimir 0 caso não seja.\n");
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);
    printf("digite o segundo numero\n");
    scanf("%i",&num2);
    printf("digite o terceiro numero\n");
    scanf("%i",&num3);
    resposta=(num1>num2&&num1<num3)&&(num1>num3&&num1<num2);
    printf("%i",resposta);
    return 0;

}

int ex12()
{
    int num1,num2,num3;
    bool resposta;

    printf(" 12.) ler três valores reais do teclado e imprimir 1 se o primeiro não está entre os outros dois, e imprimir 0 caso esteja.\n");
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);
    printf("digite o segundo numero\n");
    scanf("%i",&num2);
    printf("digite o terceiro numero\n");
    scanf("%i",&num3);
    resposta=(num1<num2&&num1>num3)&&(num1<num3&&num1>num2);
    printf("%i",resposta);
    return 0;

}


int ex13()
{
    char char1,char2,char3;
    bool resposta;

    printf(" 13.) ler três valores literais (caracteres) do teclado e imprimir 1 se o primeiro está entre os outros dois , e imprimir 0 caso não esteja\n");
    printf("digite o primeiro caractere\n");
    scanf("%c",&char1);
    printf("digite o segundo caractere\n");
    scanf("%c",&char2);
    printf("digite o terceiro caractere\n");
    scanf("%c",&char3);
    resposta=(char1>char2&&char1<char3)&&(char1>char3&&char1<char2);
    printf("%i",resposta);
    return 0;

}


int ex14()
{
    char char1,char2,char3;
    bool resposta;

    printf(" 14.) ler três valores literais (caracteres) do teclado e imprimir 1 se estão em ordem crescente lexicograficamente, e imprimir 0 caso não esteja.\n");
    printf("digite o primeiro caractere\n");
    scanf("%c",&char1);
    printf("digite o segundo caractere\n");
    scanf("%c",&char2);
    printf("digite o terceiro caractere\n");
    scanf("%c",&char3);
    resposta=(char1<char2&&char2<char3);
    printf("%i",resposta);
    return 0;

}

int ex15()
 {
    char char1;
    int resposta;

    printf(" 15.) ler um valor literal (caractere) do teclado e imprimir 1 se é uma letra maiúscula, e imprimir 0 caso não seja\n");
    printf("gite um caractere:");
    scanf(" %c",&char1);
    resposta = (char1>= 'A' && char1<= 'Z');
    printf("%d\n", resposta);

    return 0;
}
