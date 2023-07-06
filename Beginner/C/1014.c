#include <stdio.h>

int main(){

    int distancia;
    double combustivelGasto;

    scanf("%i %lf", &distancia, &combustivelGasto);

    printf("%.3lf km/l\n", distancia/combustivelGasto);

    return 0;
}