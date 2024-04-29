#include <stdio.h>
#include <stdlib.h>


//Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo.

int main()
{

    int razao,primeiro_termo,decimo_termo;

    printf("Digite a razao da P.A: \n");
    scanf("%i",&razao);
    printf("Digite o primeiro numero da P.A: \n");
    scanf("%i",&primeiro_termo);
    decimo_termo=primeiro_termo+(10-1)*razao;
    printf("O decimo termo da P.A = %i",decimo_termo);


    return 0;
}
