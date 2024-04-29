#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void gravarFibo();
void verificarParImpar();
void verificarPrimo();
double a,b,c,numero;
FILE *arquivoPrincipal, *arquivoImpar, *arquivoPar, *arquivoPrimo;
int main()
{
    int op;
    setlocale(LC_ALL,"portuguese");
    printf("Escolha a op��o que voc� deseja: \n");
    printf("1 - Gravar em um arquivo, no formato txt, os 64 primeiros valores da serie Fibonacci \n");
    printf("2 - ler o arquivo gerado anteriormente e armazenar os valores pares em um arquivo e os impares em outro arquivo utilize o formato txt \n");
    printf("3 - ler o arquivo inicialmente gerado e armazenar apenas os primos em um arquivo, no formato txt \n");
    scanf("%i",&op);
    switch (op)
    {
    case 1:
        gravarFibo(64);
        break;
    case 2:
        gravarFibo(64);
        verificarParImpar();
        break;
    case 3:
        gravarFibo(64);
        verificarPrimo();
        break;

    }
    return 0;
}

void gravarFibo(int n)
{
    //arquivo = fopen("fibonacci.txt","w");
    if ((arquivoPrincipal = fopen("fibonacci.txt", "w"))== NULL)
    {
        printf("Erro!!");
    }

    a=b=1;
    fprintf(arquivoPrincipal, "%.0lf\n",a);
    fprintf(arquivoPrincipal, "%.0lf\n",b);
    for (int i=3; i<=n ; i++)
    {
        c=a+b;
        fprintf(arquivoPrincipal,"%.0lf\n",c);
        a=b;
        b=c;
    }
    fclose(arquivoPrincipal);
}

void verificarParImpar()
{
    arquivoPrincipal = fopen("fibonacci.txt","r");
    if (arquivoPrincipal== NULL)
    {
        printf("Erro Fibo!!");
    }
    arquivoImpar = fopen("impares.txt","w");
    arquivoPar = fopen("pares.txt","w");
    if (arquivoImpar == NULL || arquivoPar == NULL)
    {
        printf("Erro Pares e Impares!!");
    }
    for (int i=0; i<= 63; i++)
    {
        fscanf(arquivoPrincipal,"%lf",&numero);
        if ((int)numero%2==0)
        {
            fprintf(arquivoPar,"%.0lf\n",numero);
        }
        else
        {
            fprintf(arquivoImpar,"%.0lf\n",numero);
        }
    }
    fclose(arquivoPrincipal);
    fclose(arquivoPar);
    fclose(arquivoImpar);
}

void verificarPrimo()
{
    arquivoPrincipal = fopen("fibonacci.txt","r");
    if (arquivoPrincipal == NULL)
    {
        printf("Erro Primos!!");
    }
    arquivoPrimo = fopen("primos.txt","w");
    if (arquivoPrimo == NULL)
    {
        printf("Erro ao abrir o arquivo de sa�da.");
    }

    for (int i=0; i<64; i++)
    {
        int divisores = 0;
        fscanf(arquivoPrincipal,"%lf",&numero);
        for (int j=2; j<=numero; j++)
        {
            if ((int)numero%j==0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            fprintf(arquivoPrimo,"%.0lf\n",numero);
        }
    }
    fclose(arquivoPrincipal);
    fclose(arquivoPrimo);

}

