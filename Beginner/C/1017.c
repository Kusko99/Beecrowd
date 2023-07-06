#include <stdio.h>

int main(){

    int tempo,velocidade;

    scanf("%i %i", &tempo, &velocidade);

    printf("%.3lf\n", (tempo*velocidade)/12.0);

    return 0;
}