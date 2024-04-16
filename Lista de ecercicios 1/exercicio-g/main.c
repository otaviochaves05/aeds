#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Ler com o raio de um círculo e mostrar o seu perímetro e área

int main()
{
    float raio,area,perimetro,pi;

    pi=3.14;
    printf("Digite o raio do circulo: \n");
    scanf("%f",&raio);
    area=pi*pow(raio,2);
    perimetro=2*pi*raio;
    printf("Area = %.2f \n",area);
    printf("Perimetro = %.2f \n",perimetro);
    return 0;
}
