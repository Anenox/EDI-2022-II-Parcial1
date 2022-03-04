#include <stdio.h>

int validacion(int numero);

int main()
{
   int numero_a_validar;
   int perfecto;

   printf("Dame un numero: ");
   scanf("%d", &numero_a_validar);
   perfecto = validacion(numero_a_validar);

           if (perfecto == 1)
               printf("Es un numero perfecto");
           else
               printf("No es un numero perfecto");

   return 0;
}
int validacion(int numero)
{
    int numerovalidador= numero/2; //6
    int suma = 0;
    int perfecto;

    while(numerovalidador > 0) {
        if (numero % numerovalidador == 0)
        {
            suma = suma + numerovalidador;//suma = 0+3 ---- suma = 3+2 ---- suma 5 + 1
        }
        numerovalidador--;
    }
    if(suma == numero)
        perfecto = 1;
    else
        perfecto = 0;
    return perfecto;
}