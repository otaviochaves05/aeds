#include <stdio.h>
#include <stdlib.h>


//Ler o numerador e o denominador de uma fração e transformá-la em um número decimal

int main()
{
    float resultado,numerador,denominador;

    printf("Escreva o numerador da fracao: \n");
    scanf("%f",&numerador);
    printf("Escreva o denominador da fracao: \n");
    scanf("%f",&denominador);
    resultado=numerador/denominador;
    printf("O resultado e: %.2f",resultado);

    return 0;
}
