#include <stdio.h>

int main () {

    int hora, min;

    printf("Considere que el reloj es de 24 hrs\n");
    printf("Introduce la hora: ");
    scanf("%d", &hora);

    printf("Introduce los minutos: ");
    scanf("%d", &min);


    if (hora>0 && hora<12 && min<60)
    {
        printf("Buenos dias");
    }
    else if (hora>=12 && hora<18 && min<60)
    {
        printf("Buenas tardes");
    }
    else if (hora>=18 && hora<23 && min<60)
    {
        printf("Buenas noches");
    }
    else if (hora>23 || min>59)
    {
        printf("Hora no valida");
    }

    return 0;
}