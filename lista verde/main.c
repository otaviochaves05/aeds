#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

int dona_monica();
int teste();
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
int ex11();
int ex12();
int ex13();
int ex14();
int ex15();
int ex16();
int ex17();
int ex18();
int ex19();
int ex20();

int main() {
    int op;
    printf("Digite qual exercício deseja executar:\n");
    printf("Digite 0 para parar:\n");
    scanf("%i", &op);

    while (op != 0) {
        switch (op) {
            case 100:
                dona_monica();
                break;
            case 200:
                teste();
                break;
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
                break;
            case 11:
                ex11();
                break;
            case 12:
                ex12();
                break;
            case 13:
                ex13();
                break;
            case 14:
                ex14();
                break;
            case 15:
                ex15();
                break;
            case 16:
                ex16();
                break;
            case 17:
                ex17();
                break;
            case 18:
                ex18();
                break;
            case 19:
                ex19();
                break;
            case 20:
                ex20();
                break;
            default:
                printf("Opção inválida\n");
                break;
        }

        printf("\n\nDigite qual exercício deseja executar:\n");
        printf("Digite 0 para parar:\n");
        scanf("%i", &op);
    }

    return 0;
}


int dona_monica()
{
    int m,f1,f2,f3,mais_velho;
    scanf("%i",&m);
    scanf("%i",&f1);
    scanf("%i",&f2);
    //m = f1 + f2 + f3;
    f3 = m - f1 - f2;
    if (f1>f2 && f1>f3) mais_velho=f1;
    if (f2>f1 && f2>f3) mais_velho=f2;
    if (f3>f1 && f3>f2) mais_velho=f3;
    printf("%i",mais_velho);
    return 0;
}
int teste()
{
    int a,b,soma;
    scanf("%i",&a);
    scanf("%i",&b);
    soma=a+b;
    printf("%i",soma);
    return 0;
}

int ex01()
{
    int num,c,d,u,num2;
    scanf("%i",&num);
    c=num/100;
    d=(num%100)/10;
    u=num%10;
    num2=u*100 + d*10 + c;
    printf("%i",num2);
    return 0;
}
int ex02()
{
    float salario,kw_unidade,valor_kw,valor_total,valor_desconto,desconto;
    scanf("%f %f",&salario,&kw_unidade);
    valor_kw=salario/7/100;
    valor_total=valor_kw*kw_unidade;
    desconto=0.10*valor_total;
    valor_desconto=valor_total-desconto;
    printf("Valor do kW: %.2f\n",valor_kw);
    printf("Valor a pagar: %.2f\n",valor_total);
    printf("Valor com desconto: %.2f\n",valor_desconto);
    return 0;
}
int ex03()
{
    int base,altura;
    float area,perimetro,diagonal;
    scanf("%i",&base);
    scanf("%i",&altura);
    area=base*altura;
    perimetro=(base+altura)*2;
    diagonal=sqrt(pow(base,2)+pow(altura,2));
    printf("Perimetro: %.2f\n",perimetro);
    printf("Area: %.2f\n",area);
    printf("Diagonal: %.2f\n",diagonal);
    return 0;
}
int ex04()
{
    int a1,razao,d_termo;
    scanf("%i",&razao);
    scanf("%i",&a1);
    d_termo=a1+(10-1)*razao;
    printf("%i",d_termo);
    return 0;
}
int ex05()
{
    int a1,razao,q_termo;
    scanf("%i",&razao);
    scanf("%i",&a1);
    q_termo=a1*(pow(razao,5-1));
    printf("%i",q_termo);
    return 0;
}
int ex06()
{
    int a,b;
    float x;
    scanf("%i",&a);
    scanf("%i",&b);
    x=b*(-1)/a;
    printf("%.2f",x);
    return 0;
}
int ex07()
{
    float nota;
    scanf("%f",&nota);
    if (nota>=8 && nota <=10)
    {
        printf("Otimo");
    }
    else
    {
        if (nota>=7 && nota<8)
        {
            printf("Bom");
        }
    }
    if (nota>=5 && nota<7)
    {
        printf("Regular");
    }
    else
    {
        if (nota<5)
        {
            printf("Insatisfatorio");
        }

    }
    return 0;
}
int ex08()
{
    int diaria,aptos;
    float desconto,valor_desconto,valor_arrecadado1,valor_arrecadado2,diferenca;
    aptos=80;
    scanf("%d",&diaria);
    desconto=0.25*diaria;
    valor_desconto=diaria-desconto;
    valor_arrecadado1=(0.80*aptos)*valor_desconto;
    valor_arrecadado2=(0.50*aptos)*diaria;
    diferenca=valor_arrecadado1-valor_arrecadado2;
    printf("Valor promocional: %.2f\n",valor_desconto);
    printf("Promocional com 80%% ocupado: %.2f\n",valor_arrecadado1);
    printf("Normal com 50%% ocupado: %.2f\n",valor_arrecadado2);
    printf("Diferenca entre os valores: %.2f\n",diferenca);
    return 0;
}
int ex09()
{
    int v_max,v_motorista;
    scanf("%i %i",&v_max,&v_motorista);
    if (v_motorista<=v_max)
    {
        printf("Motorista respeitou a lei");
    }
    else
    {
        if (v_motorista<=(v_max+10))
        {
            printf("Multa de 50 reais");
        }
        else
        {
            if (v_motorista<=(v_max+30))
            {
                printf("Multa de 100 reais");
            }
            else
            {
                if (v_motorista>(v_max+30))
                {
                    printf("Multa de 200 reais");
                }
            }
        }
    }
    return 0;
}
int ex10()
{
    int n,numero,positivos,negativos,zero;
    positivos=0;
    negativos=0;
    zero=0;
    scanf("%i",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%i",&numero);
        if(numero>0)
        {
            positivos++;
        }
        if(numero<0)
        {
            negativos++;
        }
        if(numero==0)
        {
            zero++;
        }
    }
    printf("%i POSITIVOS\n",positivos);
    printf("%i NEGATIVOS\n",negativos);
    printf("%i ZEROS\n",zero);
    return 0;
}
int ex11()
{
    int cont=0,numero,div39=0,div2=0,div5=0,aux;
    float nl;
    for(int i=0; i<10; i++)
    {
        scanf("%f",&nl);
        numero=nl;
        aux=0;
        if (numero%3==0 && numero%9==0)
        {
            div39++;
            aux=1;
        }
        if (numero%2==0)
        {
            div2++;
            aux=1;
        }
        if (numero%5==0)
        {
            div5++;
            aux=1;
        }
        if(aux==0) printf("Numero nao divisivel pelos valores\n");

    }
    cont++;
    printf("%i Numeros sao divisiveis por 3 e por 9\n",div39);
    printf("%i Numeros sao divisiveis por 2\n",div2);
    printf("%i Numeros sao divisiveis por 5\n",div5);
    return 0;

}
int ex12()
{
    int n,num,den;
    float f,e,fat;
    e=0;
    num=1;
    den=0;
    scanf("%i",&n);
    for (int i=1; i <= n ; i++)
    {
        fat = 1;
        for (int cont=1; cont<=den ; cont++)
        {
            fat*=cont;
        }
        f=num/fat;
        e+=f;
        num=1;
        den+=1;
    }
    printf("%.2f\n",e);
    return 0;
}
int ex13()
{
    int filhos,cont,sal_100,total_filhos,media_filhos;
    float salario,maior_salario,total_salario,media_salario,p_100;
    cont=0;
    salario=0;
    sal_100=0;
    scanf("%f %i",&salario,&filhos);
    while(salario>=0)
    {
        cont++;
        if(salario<=100 && salario>=0) sal_100++;
        if(salario>maior_salario) maior_salario=salario;
        total_filhos+=filhos;
        total_salario+=salario;
        scanf("%f %i",&salario,&filhos);
    }
    media_filhos=total_filhos/cont;
    media_salario=total_salario/cont;
    p_100=(float)sal_100/cont*100;
    printf("%.2f\n",media_salario);
    printf("%i\n",media_filhos);
    printf("%.2f\n",maior_salario);
    printf("%.2f\n",p_100);

    //printf("%i %.2f\n",total_filhos,total_salario);
    //printf("%i %i\n",cont,sal_100);
    //printf("%.2f",maior_salario);
    return 0;
}
int ex14()
{
    int n,a,b,c;
    scanf("%i",&n);
    a=1;
    b=1;
    printf("%i ",a);
    printf("%i ",b);
    for (int i=3; i<=n; i++)
    {
        c=a+b;
        printf("%i ",c);
        a=b;
        b=c;
    }
    return 0;
}
int ex15()
{
    int lucro_ate10 = 0, lucro_entre10e20 = 0,lucro20 = 0;
    float p_compra, p_venda, lucro, compra_total, venda_total,lucro_total;

    scanf("%f %f", &p_compra, &p_venda);


    while (p_compra>0)
    {
        lucro = p_venda - p_compra;
        if (lucro < 0.1 * p_compra)
        {
            lucro_ate10++;
        }
        else
        {
            if (lucro <=0.2 * p_compra)
            {
                lucro_entre10e20++;
            }
            else
            {
                lucro20++;
            }
        }
        compra_total+=p_compra;
        venda_total+=p_venda;
        lucro_total+=lucro;
        scanf("%f %f", &p_compra, &p_venda);
    }
    printf("%i\n", lucro_ate10);
    printf("%i\n", lucro_entre10e20);
    printf("%i\n", lucro20);
    printf("%.2f\n", compra_total);
    printf("%.2f\n", venda_total);
    printf("%.2f\n", lucro_total);

    return 0;
}
int ex16()
{
    int voto,c1,c2,c3,c4,nulo,branco;
    scanf("%i",&voto);
    while (voto>0)
    {
        if (voto==1)
            c1++;
        if (voto==2)
            c2++;
        if (voto==3)
            c3++;
        if (voto==4)
            c4++;
        if (voto==5)
            nulo++;
        if (voto==6)
            branco++;
        scanf("%i",&voto);
    }
    printf("%i\n",c1);
    printf("%i\n",c2);
    printf("%i\n",c3);
    printf("%i\n",c4);
    printf("%i\n",nulo);
    printf("%i\n",branco);
    return 0;
}
int ex17()
{
    char string[201];
    int fimstring,meiastring,cont=0;

    scanf("%[^\n]", string);
    fimstring=strlen(string)-2;
    meiastring=fimstring/2;

    for(int i=0; i<meiastring; i++ )
    {
        if(string[i] == string[fimstring])
        {
            cont++;
        }
        fimstring--;
    }

    if(cont == meiastring)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}
int ex18()
{
    char string[201];
    char c1,c2;
    int i=0;
    scanf(" %c",&c1);
    scanf(" %c",&c2);
    scanf(" %200[^\n]",string);

    for (i=0; string[i]!='\0'; i++)
    {
        if (string[i]==c1)
        {
            string[i]=c2;
        }
    }
    printf("string:%s",string);
    return 0;
}
int ex19()
{
    char frase[201],frase2[201];
    int j=0;

    scanf("%200[^\n]",frase);
    for (int i; frase[i]; i++)
    {
        if (frase[i]!=' ')
        {
            frase2[j]=frase[i];
            j++;
        }
    }
    printf("string:%s",frase2);
    return 0;
}
int ex20()
{
    char string[201];
    scanf("%200[^\n]",string);
    for (int i=0; string[i]; i++)
    {
        if (string[i]==' ') printf("\n");
        if (string[i]!=' ') printf("%c",string[i]);
    }
    return 0;
}

