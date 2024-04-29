#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//Calcule a média aritmética de quatro números inteiros dados.


int main()
{
    int n1,n2,n3,n4;
    float media;

    printf("digite o numero 1 e pressione enter \n");
    scanf("%i",&n1);
    printf("digite o numero 2 pressione enter \n");
    scanf("%i",&n2);
    printf("digite o numero 3 pressione enter \n");
    scanf("%i",&n3);
    printf("digite o numero 4 pressione enter \n");
    scanf("%i",&n4);
    media=(n1+n2+n3+n4)/4;

    printf("A media aritimetica dos numeros eh: %.2f \n",media);
    return 0;
}
