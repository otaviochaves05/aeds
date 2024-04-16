#include <stdio.h>
#include <stdlib.h>


// Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a
//quantidade de ração em gramas. Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração
//fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias
int main()
{
    float peso_saco,gato1,gato2,gato1_kg,gato2_kg,total_5dias,restante_saco;

    printf("Qual o peso do saco de racao:\n");
    scanf("%f",&peso_saco);
    printf("Quantidade de racao gato 1:\n");
    scanf("%f",&gato1);
    printf("Quantidade de racao gato 2:\n");
    scanf("%f",&gato2);

    gato1_kg=gato1/1000;
    gato2_kg=gato2/1000;

    total_5dias=(gato1_kg+gato2_kg)*5;
    restante_saco=peso_saco-total_5dias;

    printf("Apos 5 dias ira restar %.2f KG de racao",restante_saco);

    return 0;
}
