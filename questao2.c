#include<stdio.h>
int main (){
    int valor1,valor2;
        scanf("%i%i",valor1,valor2);
        printf("valores%i%i",valor1,valor2);
        valor1=valor1+valor2;
        valor2=valor1-valor2;
        valor1=valor1-valor2;
        printf("valores %i%i",valor1,valor2);
        return 0;

}
