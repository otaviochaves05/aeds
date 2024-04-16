#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média
//ponderada dessas notas.

int main()
{
    int   p_nota1,p_nota2,p_nota3;
    float nota1,nota2,nota3, media;

    printf("Digite a nota e o peso: \n");
    printf("nota 1:\n");
    scanf("%f",&nota1);
    printf("peso:\n");
    scanf("%i",&p_nota1);

    printf("nota 2:\n");
    scanf("%f",&nota2);
    printf("peso:\n");
    scanf("%i",&p_nota2);

    printf("nota 3:\n");
    scanf("%f",&nota3);
    printf("peso:\n");
    scanf("%i",&p_nota3);

    media=(nota1*p_nota1 + nota2*p_nota2 + nota3*p_nota3)/(p_nota1+p_nota2+p_nota3);

    printf("media %.2f",media);

    return 0;
}
