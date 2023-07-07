#include <stdio.h>

int main(){

    int a,b,c,d;
    scanf("%i %i %i %i", &a,&b,&c,&d);

    int aceito = 0;

    if(b>c){
        if(d>a){
            if((c+d)>(a+b)){
                if(c>0){
                    if(d>0){
                        if(a%2 == 0){
                            aceito = 1;
                        }
                    }
                }
            }
        }
    }

    if(aceito == 1){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}