#include <stdio.h>
#include <stdlib.h>


//Ler o numerador e o denominador de uma fra��o e transform�-la em um n�mero decimal

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
