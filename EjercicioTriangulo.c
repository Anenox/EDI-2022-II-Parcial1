#include <stdio.h>


int main()
{

    float a, b, c;

    printf("Introduce los datos del triangulo");
    printf("Medida del lado A: ");
    scanf("%f", &a);

    printf("Medida del lado B: ");
    scanf("%f", &b);

    printf("Medida del lado C: ");
    scanf("%f", &c);


    if(a==b && b==c && a==c)
    {
        printf("Es un triangulo equilatero");
    }
    else if(b==c && a!=b || c==a && b!=c || a==b && c!=a)
    {
        printf("Es un triangulo isosceles");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("Es un triangulo escaleno");
    }


    return 0;
}
