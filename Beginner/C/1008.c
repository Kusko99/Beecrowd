#include <stdio.h>

int main(){

    int numero, horas;
    double salarioPorHora;

    scanf("%i", &numero);
    scanf("%i", &horas);
    scanf("%lf", &salarioPorHora);

    printf("NUMBER = %i\n", numero);
    printf("SALARY = U$ %.2lf\n", horas*salarioPorHora);

    return 0;
}