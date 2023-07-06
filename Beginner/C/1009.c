#include <stdio.h>

int main(){

    char nome[10];
    double salario,vendas;

    fgets(nome,sizeof(nome),stdin);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2lf\n", salario+(vendas*0.15));
    return 0;
}