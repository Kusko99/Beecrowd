#include <stdio.h>

int main(){

    int valor;
    scanf("%i", &valor);
    printf("%i\n", valor);

    int notas[] = {100,50,20,10,5,2,1};
    int tamanho = sizeof(notas)/sizeof(notas[0]);

    for(int i=0;i<tamanho;i++){
        int nota = notas[i];
        int quantidade = 0;
        if(valor>=nota){
            quantidade = valor/nota;
            valor = valor - (nota*quantidade);
        }
        printf("%i nota(s) de R$ %i,00\n",quantidade,nota);
    }

    return 0;
}