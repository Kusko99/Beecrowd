#include <stdio.h>

int main(){

    int segundos;
    scanf("%i", &segundos);

    int horas = segundos/3600;
    segundos = segundos - (horas*3600);

    int minutos = segundos/60;
    segundos = segundos - (minutos*60);

    printf("%i:%i:%i\n",horas,minutos,segundos);

    return 0;
}