#include <stdio.h>

int main()
{
    int dias, horas , minutos , segundos , segdias ,seghoras ,segmin ;

    printf("Ingrese los dias: ");
    scanf("%d", &dias);
    printf("Ingrese las horas: ");
    scanf("%d", &horas);
    printf("Ingrese los minutos: ");
    scanf("%d", &minutos);

    segdias = dias * 24 * 60 * 60;
    seghoras = horas * 60 * 60;
    segmin = minutos * 60;
    segundos = segdias + seghoras + segmin;


    printf("%d dias, %d horas y %d minutos son: %d segundos.",dias, horas, minutos, segundos );
    return 0;
}

