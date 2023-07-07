#include <stdio.h>

int main(){

    double valor;
    scanf("%lf", &valor);

    int intervalos[4][2]={
        {0,25},
        {25,50},
        {50,75},
        {75,100}
    };

    int tamanho = sizeof(intervalos)/sizeof(intervalos[0]);
    int ultimo = intervalos[tamanho-1][1];

    if(valor >= 0 && valor <= 25){
        printf("Intervalo [0,25]\n");
    }else if(valor<0 || valor>ultimo){
        printf("Fora de intervalo\n");
    }else{
        for(int i = 1; i<tamanho;i++){
            int inicio = intervalos[i][0];
            int fim = intervalos[i][1];
            if(valor>inicio && valor<=fim){
                printf("Intervalo (%i,%i]\n",inicio,fim);
                break;
            }
        }
    }


    return 0;
}