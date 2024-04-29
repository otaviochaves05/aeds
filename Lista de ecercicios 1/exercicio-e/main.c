#include <stdio.h>
#include <stdlib.h>


//Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que leia o valor do
//salário mínimo e a quantidade de kilowatt gasta por uma residência, calcule e mostre: o valor em reais de cada
//kilowatt; o valor em reais a ser pago; e o novo valor a ser pago por essa residência com um desconto de 10%.

int main()
{
    float salario,kilowatt,valor_kw,novo_kw,desconto,valor_liquido,valor_cada_kw;

    printf("Digite o valor do salario minimo:\n");
    scanf("%f",&salario);
    printf("Digite a quantidade de kilowatt gasto:\n");
    scanf("%f",&kilowatt);

    //valor em reais a ser pago
    novo_kw=kilowatt/100.0;
    valor_kw=novo_kw*(salario/7.0);

    //valor em reais de cada kw
    valor_cada_kw=kilowatt/valor_kw;

    //valor a ser pago com desconto
    desconto=0.1*valor_kw;
    valor_liquido=valor_kw-desconto;

    printf("O valor em reais de cada kilowatt = %.2f\n",valor_cada_kw);
    printf("O valor em reais total a ser pago = %.2f\n",valor_kw);
    printf("O valor a ser pago apos o desconto= %.2f\n",valor_liquido);




    return 0;
}
