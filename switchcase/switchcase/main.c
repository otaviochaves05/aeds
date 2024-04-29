#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int ex01();
int ex02();
int ex03();


int main()
{
    setlocale(LC_ALL,"portuguese");

    int op;
    printf("Escolha:\n");
    printf("1 - exercicio 1.\n");
    printf("2 - exercicio 2.\n");
    printf("3 - exercicio 3.\n");
    scanf("%i",&op);
    switch(op)
    {
    case 1:
        ex01();
        break;
    case 2:
        ex02();
        break;
    case 3:
        ex03();
        break;
    case 0:
        printf("Escolha invalida");
    }
    return 0;
}
int ex01()
{
    printf("Exercicio 1");
    return 0;
}
int ex02()
{
    printf("Exercicio 2");
    return 0;
}
int ex03()
{
    printf("Exercicio 3");
    return 0;
}
