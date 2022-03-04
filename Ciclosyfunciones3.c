#include <stdio.h>
#define N 10

void mayormenor(int *numero,int *mayor,int *menor);

int main()
{
    int numero, mayor, menor;
    mayormenor( &numero, &mayor, &menor);

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d", menor);

    return 0;
}
void mayormenor(int *numero,int *mayor,int *menor)
{
int contador = 0;
int M = 0;
int m = 9999;


while (contador<N)
{
printf("Digita el numero\n");
scanf("%d", numero);

if (*numero>M)
M = *numero;
*mayor=M;

if (*numero < m)
m = *numero;
*menor=m;

contador++;
}
}
