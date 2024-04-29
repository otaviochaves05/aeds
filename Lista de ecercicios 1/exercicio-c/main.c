#include <stdio.h>
#include <stdlib.h>


// Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).
//Fórmula de conversão: F = 9/5 * C + 32
//Implemente uma alteração neste exercício para verificar o resultado

int main()
{
    int temp_c;
    float temp_f;

    printf("Digite a temperatura em Celcius:\n");
    scanf("%i",&temp_c);

    temp_f=(9.0/5.0)*temp_c+32;

    printf("%i graus Celcius = %.2f Fahrenheit",temp_c,temp_f);

    return 0;
}
