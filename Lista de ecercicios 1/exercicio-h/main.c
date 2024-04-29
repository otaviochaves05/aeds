#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.

int main()
{
    int cateto1,cateto2,hipotenusa,soma_catetos;

    printf("Digite o valor do primeiro cateto: \n");
    scanf("%i",&cateto1);
    printf("Digite o valor do segundo cateto: \n");
    scanf("%i",&cateto2);
    soma_catetos=pow(cateto1,2)+pow(cateto2,2);
    hipotenusa=sqrt(soma_catetos);
    printf("Hipotenusa = %i \n",hipotenusa);




    return 0;
}
