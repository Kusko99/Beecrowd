#include <stdio.h>

int main(){

    double valor;
    scanf("%lf", &valor);

    double notas[] = {100.00,50.00,20.00,10.00,5.00,2.00};
    double moedas[] = {1.00,0.50,0.25,0.10,0.05,0.01};
    int tamanhoNotas = sizeof(notas)/sizeof(notas[0]);
    int tamanhoMoedas = sizeof(moedas)/sizeof(moedas[0]);

    printf("NOTAS:\n");	
    for(int i = 0;i<tamanhoNotas;i++){
        double nota = notas[i];
        int quantidade = 0;
        if(valor>=nota){
            quantidade = valor/nota;
            valor = valor - (quantidade*nota);
        }
        printf("%i nota(s) de R$ %.2lf\n", quantidade,nota);
    }

    valor = valor*100;
    printf("MOEDAS:\n");
    for(int i = 0;i<tamanhoMoedas;i++){
        double moeda = moedas[i];
        int arredondaMoeda = moeda*100;
        int quantidade = 0;
        if(valor>=arredondaMoeda){
            quantidade = valor/arredondaMoeda;
            valor = valor - (quantidade*arredondaMoeda);
        }
        printf("%i moeda(s) de R$ %.2lf\n", quantidade,moeda);
    }

    return 0;
}