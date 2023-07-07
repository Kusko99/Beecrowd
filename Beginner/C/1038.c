#include <stdio.h>

int main(){

    int codigo, quantidade;
    double conta;
    scanf("%i %i", &codigo, &quantidade);

    double lanches[5][2] = {
        {1,4.0},
        {2,4.5},
        {3,5.0},
        {4,2.0},
        {5,1.5}
    };

    int tamanho = sizeof(lanches)/sizeof(lanches[0]);

    for(int i=0;i<tamanho;i++){
        int cod = lanches[i][0];
        if(codigo == cod){
            conta = lanches[i][1] * quantidade;
            break;
        }
    }

    printf("Total: R$ %.2lf\n", conta);

    return 0;
}