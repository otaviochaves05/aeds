#include <stdio.h>
#include <stdlib.h>


// Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostrar o número
//invertido (no formato UDC). O número invertido deve ser armazenado em outra variável antes de ser mostrado

int main()
{
    int num,c,d,u,aux,num2;

    printf("digite o numero:\n");
    scanf("%i",&num);
    c=num/100;
    aux=num%100;
    d=aux/10;
    u=aux%10;
    num2= u*100+d*10+c;
    printf("%i",num2);


    return 0;
}
