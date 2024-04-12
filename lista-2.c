#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("Lista 2 de exercicios\n");
    int op;
    printf("qual exercicio deseja executar?");
    scanf("%i",&op);
    while(ex!=0)
    {
        switch (op)
        {
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
       case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
        case 6:
            ex06();
            break;
        case 7:
            ex07();
            break;
        case 8:
            ex08();
            break;
        case 9:
            ex09();
            break;
        case 10:
            ex10();
            break;*/
        case 0:
            printf("finalizando programa");

        }

    }
    
    return 0;
}

int ex01()
//Fazer um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero e par ou �mpar.

{
    printf("Fazer um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero e par ou �mpar.\n");

    int num;
    printf("digite um numero: \n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("O numero e par");
    }
    else
    {
        printf("O numero e impar");
    }
    return 0;
}


int ex02()
//Fazer um algoritmo pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da m�dia do aluno,
//uma mensagem de "Aprovado", caso a m�dia seja igual ou superior a 6, ou a mensagem "reprovado", caso
//contr�rio.
{
    printf("Fazer um algoritmo pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da m�dia do aluno,uma mensagem de Aprovado, caso a m�dia seja igual ou superior a 6, ou a mensagem reprovado, caso contr�rio. \n");

    char nome[20];
    float n1,n2,n3,media;

    printf("Digite o nome do aluno: \n");
    scanf("%s",nome);
    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);
    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);
    printf("Digite a terceira nota: \n");
    scanf("%f",&n3);
    media=(n1+n2+n3)/3;
    if(media>=6)
    {
        printf("Nome: %s \n",nome);
        printf("Media: %.2f \n",media);
        printf("Status: Aprovado. \n");
    }
    else
    {
        printf("Nome: %s \n",nome);
        printf("Media: %.2f \n",media);
        printf("Status: Reprovado. \n");
    }
    return 0;
}


int ex03()
//Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado solido, l�quido ou gasoso.
{
    printf("Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado solido, l�quido ou gasoso.\n");

    float temperatura;

    printf("Digite a temperatura da agua:\n");
    scanf("%f",&temperatura);
    if(temperatura>0 && temperatura<100)
    {
        printf("Liquido \n");
    }
    else
    {
        if(temperatura<=0)
        {
            printf("Solido \n");
        }
        else
        {
            if(temperatura>=100)
            {
                printf("Gasoso \n");
            }
        }
    }
    return 0;
}

int ex04()
//Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de
//uma mensagem de erro.
{
    printf("Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de uma mensagem de erro. \n");

    int x, y;

    printf("Digite um valor: \n");
    scanf("%i",&x);
    if(x<0)
    {
        y=pow(x,2)+4;
        printf("y= %i",y);
    }
    else
    {
        if(x>0)
        {
            y=pow(x,3)-3;
        printf("y= %i",y);
        }
        else
        {
            printf("erro");
        }
    }
    return 0;
}

int ex05()

//Construa um algoritmo que receba como entrada tr�s valores (A,B e C). Ap�s o processamento o menor valor
//dever� estar em A e o maior valor em C, e o valor intermedi�rio em B. Imprima A,B e C.

{
    printf("Construa um algoritmo que receba como entrada tr�s valores (A,B e C). Ap�s o processamento o menor valor dever� estar em A e o maior valor em C, e o valor intermedi�rio em B. Imprima A,B e C.\n");

    int a,b,c,aux;

    printf("Digite o primeiro valor: \n");
    scanf("%i",&a);
    printf("Digite o segundo valor: \n");
    scanf("%i",&b);
    printf("Digite o terceiro valor: \n");
    scanf("%i",&c);

    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }

    if(a>c)
    {
        aux=a;
        a=c;
        c=aux;
    }

    if(b>c)
    {
        aux=b;
        b=c;
        c=aux;
    }


    printf("%i, %i,%i",a,b,c);
    return 0;
}

int ex06()
//Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z e verifique se o n�mero X � divis�vel por Y e por Z.
//O algoritmo dever� mostrar as poss�veis mensagens:
//- o n�mero � divis�vel por Y e Z.
//- o n�mero � divis�vel por Y mas n�o por Z.
//- o n�mero � divis�vel por Z mas n�o por Y.
//- o n�mero n�o � divis�vel nem Y nem por Z.

{

   int x,y,z;

   printf("digite o numero x:\n");
   scanf("%i",&x);
   printf("digite o numero y:\n");
   scanf("%i",&y);
   printf("digite o numero z:\n");
   scanf("%i",&z);

   if(x%y==0 && x%z==0)
   {
       printf("o numero e divisivel por y= %i e z= %i",y,z);
   }
   else
   {
       if(x%y!=0 && x%z!=0)
       {
           printf("o numero nao e divisivel por y= %i nem por z= %i",y,z);
       }

   }

   if(x%y==0 && x%z!=0)
   {
       printf("o numero e divisivel por y= %i mas nao por z= %i",y,z);
   }
   else
   {
       if(x%y!=0 && x%z==0)
       {
           printf("o numero e divisivel por z= %i mas nao por y= %i",z,y);
       }
   }

   return 0;
}


int ex07()

//O n�mero 3025 possui a seguinte caracter�stica:
//30 + 25 = 55
//552 = 3025
//Fazer um algoritmo que dado um n�mero de 4 d�gitos (verifique se o n�mero pertence a faixa) calcule e escreva se ele
//possui ou n�o esta caracter�stica.

{
    int numero,d1,d2,soma,quadrado_soma;

    printf("digite um numero de 4 digitos:\n");
    scanf("%i",&numero);
    if(numero>=1000 && numero<=9999)
    {
        d1=(numero/100);
        d2=numero%100;
        soma=d1+d2;
        quadrado_soma=pow(soma,2);
            if(quadrado_soma==numero)
        {
            printf("o numero possui a caracteristica");
        }
        else
        {
            printf("o numero nao possui a caracterisca");
        }
    }
    else
    {
        printf("numero invalido");

    }

    return 0;
}


int ex08()

/*ler um c�digo do teclado e mostrar o nome correspondente, de acordo com a lista :
221 Bernardo
211 Eust�quio
311 Luiz
312 M�rio
332 Artur*/

{

    int codigo;

    printf("digite o codigo:\n");
    scanf("%i",&codigo);

    switch(codigo)
    {
    case 221:
        printf("Bernardo");
        break;
    case 211:
        printf("Eustaquio");
        break;
    case 311:
        printf("Luiz");
        break;
    case 312:
        printf("Mario");
        break;
    case 332:
        printf("Arthur");
        break;
    default:
        printf("Codigo invalido");
    }

    return 0;
}


int ex09()
/*N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.
    Exemplo:929, 44, 97379. Fazer um algoritmo que dado um n�mero de 5 d�gitos; calcule e escreva se este e ou n�o pal�ndromo*/
{
    int num,d1,d2,d4,d5;

    printf("digite um numero com 5 digitos:\n");
    scanf("%i",&num);
    d1=num/10000;
    d2=(num%10000)/1000;
    d4=(num%100)/10;
    d5=(num%10);
    //printf("%i %i %i %i",d1,d2,d4,d5);
    if(d1==d5 && d2==d4)
    {
        printf("o numero e um palindromo");
    }
    else
    {
        printf("o numero nao e um palmidromo");
    }
    return 0;
}


int ex10()
{

    /*Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo do tipo do
consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
� Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
� Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
� Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de �gua em metros cubos.
Como resultado imprimir o valor a ser pago pelo mesmo.*/

    int tipo;
    float consumo,valor;
    printf("qual o seu consumo de agua em metros cubicos?\n");
    scanf("%f",&consumo);
    printf("qual o tipo da sua residencia\n");
    printf("1 = residencial\n");
    printf("2 = comercial\n");
    printf("3 = industrial\n");
    scanf("%i",&tipo);
    switch(tipo)
    {
    case 1:
        valor=(consumo*3.50)+75;
        printf("O valor da sua conta e R$ %.2f",valor);
        break;
    case 2:
        if(consumo<=80)
        {
            valor=500;
            printf("O valor da sua conta e R$ %.2f",valor);

        }
        else
        {
            if(consumo>80)
            {
                valor=((consumo-80)*5.50)+500;
                printf("O valor da sua conta e R$ %.2f",valor);

            }
        }
        break;
    case 3:
        if(consumo<=100)
        {
            valor=800;
            printf("O valor da sua conta e R$ %.2f",valor);
        }
        else
        {
            if(consumo>100)
            {
                valor=((consumo-100)*8)+800;
                printf("O valor da sua conta e R$ %.2f",valor);
            }
        }
        break;
    }
    return 0;
}

















