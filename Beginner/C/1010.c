#include <stdio.h>

int main(){

    double conta = 0;
    for(int i=1;i<=2;i++){
        int codigo, quantidade;
        double valor;
        scanf("%i", &codigo);
        scanf("%i", &quantidade);
        scanf("%lf", &valor);
        conta += quantidade*valor;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", conta);

    return 0;
}