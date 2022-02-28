#include <stdio.h>

int main () {
    float kilos;
    float precio;
    float precio_final;

    printf("Introduce el precio del kilo de manzana: ");
    scanf("%f", &precio);

    printf("Introduce los kilos de manzana");
    scanf("%f", &kilos);


    if (kilos <= 2) {
        precio_final = precio * kilos;
        printf("El total es: %f", precio_final);
    } else if (kilos > 2 && kilos <= 5) {
        precio = precio * kilos;
        precio_final = precio * .9;
        printf("El total es: %.2f", precio_final);
    } else if (kilos > 5 && kilos <= 10) {
        precio = precio * kilos;
        precio_final = precio * .85;
        printf("El total a pagar es: %.2f", precio_final);
    } else if (kilos > 10) {
        precio = precio * kilos;
        precio_final = precio * .8;
        printf("El total a pagar es: %.2f", precio_final);
    }
    return 0;
}

