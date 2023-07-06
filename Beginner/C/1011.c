#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){

    double raio;
    scanf("%lf", &raio);

    double raio3 = pow(raio,3);

    printf("VOLUME = %.3lf\n", (4/3.0) * PI * raio3 );

    return 0;
}