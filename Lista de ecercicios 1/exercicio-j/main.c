#include <stdio.h>
#include <stdlib.h>

//Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque dos valores das duas variáveis de forma
//que a variável A passe a ter o valor da variável B e vice-versa. No final, mostre os valores finais.


int main()
{
    float a,b,aux;

    printf("Digite o numero a: \n");
    scanf("%f",&a);
    printf("Digite o numero b: \n");
    scanf("%f",&b);

    //printf(" a = %.2f \n",a);
    //printf(" b = %.2f \n",b);

    aux=a;
    a=b;
    b=aux;

    printf(" a = %.2f \n",a);
    printf(" b = %.2f \n",b);
    return 0;
}
