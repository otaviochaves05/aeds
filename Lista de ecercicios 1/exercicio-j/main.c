#include <stdio.h>
#include <stdlib.h>

//Ler dois n�meros reais e salv�-los nas vari�veis A e B. Em seguida, troque dos valores das duas vari�veis de forma
//que a vari�vel A passe a ter o valor da vari�vel B e vice-versa. No final, mostre os valores finais.


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
