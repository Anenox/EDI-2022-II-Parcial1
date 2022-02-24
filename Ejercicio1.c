#include <stdio.h>

int main()
{
    float precio, precio_final, descuento;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    printf("Ingrese el descuento que tiene el producto: ");
    scanf("%f", &descuento);

    precio_final = precio - (precio * (descuento / 100));

    printf("El precio con descuento es: %.2f", precio_final);

    return 0;
}
