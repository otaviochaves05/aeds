#include <stdio.h>
#include <stdlib.h>


//Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia.

int main()
{
    int hora, minutos,minutos_totais;

    printf("digite a hora \n");
    scanf("%i",&hora);
    printf("digite os minutos \n");
    scanf("%i",&minutos);
    minutos_totais=hora*60+minutos;
    printf("Passaram %i minutos desde o inicio do dia",minutos_totais);



    return 0;
}
