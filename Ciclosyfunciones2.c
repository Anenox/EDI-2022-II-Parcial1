#include <stdio.h>

int validacion(int numero);

int main() {
    int numero_a_validar;
    int perfecto;

    do {
        printf("Dame un numero: ");
        scanf("%d", &numero_a_validar);

        perfecto = validacion(numero_a_validar);

        if (perfecto == 1)
            printf("Es un numero perfecto\n\n");
        else
            printf("No es un numero perfecto\n\n");
    }while (numero_a_validar != 0);
}

int validacion(int numero)
{
    int numerovalidador= numero/2; //6
    int suma = 0;
    int perfecto;

    while(numerovalidador > 0) {
        if (numero % numerovalidador == 0)
        {
            suma = suma + numerovalidador;
        }
        numerovalidador--;
    }
    if(suma == numero)
        perfecto = 1;
    else
        perfecto = 0;

    return perfecto;
}