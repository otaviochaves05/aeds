#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.


int main()
{

    float area,diagonal,base,altura,perimetro;

    printf("Digite a base do retangulo: \n");
    scanf("%f,",&base);
    printf("Digite a altura do retangulo: \n");
    scanf("%f,",&altura);

    perimetro=(base+altura)*2;
    area=base*altura;
    diagonal=sqrt(pow(base,2)+pow(altura,2));

    printf("Perimetro = %.2f \n",perimetro);
    printf("Area = %.2f \n",area);
    printf("Diagonal = %.2f \n",diagonal);

    return 0;
}
