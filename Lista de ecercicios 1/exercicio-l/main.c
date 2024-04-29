#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo

int main()
{
    int razao,primeiro_termo,quinto_termo;

    printf("Digite a razao da P.G: \n");
    scanf("%i",&razao);
    printf("Digite o primeiro numero da P.G: \n");
    scanf("%i",&primeiro_termo);

    quinto_termo=primeiro_termo*pow(razao,(5-1));

    printf("O quinto termo da P.G = %i",quinto_termo);

    return 0;
}
