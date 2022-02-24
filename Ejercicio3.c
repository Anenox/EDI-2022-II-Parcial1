#include <stdio.h>

int main()
{
    int dias, horas , minutos , seg , segundos  ;

    printf("Ingrese los segundos: ");
    scanf("%d", &seg);

    dias = seg / 86400;
    seg = seg % 86400;

    horas = seg / 3600;
    seg = seg % 3600;

    minutos = seg / 60;
    seg = seg % 60;

    segundos = seg;

    printf("Dias: %d \n",dias);
    printf("Horas: %d \n",horas);
    printf("Minutos: %d \n",minutos);
    printf("Segundos: %d",segundos);

    return 0;
}