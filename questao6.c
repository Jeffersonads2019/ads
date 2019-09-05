#include <stdio.h>
int main(){
    int valor1,valor2;
    scanf("%i %i", &valor1, &valor2);//entrada de dados pelo usuário
    printf("MEDIA PONDERADA = %i", (valor1*2+valor2*7)/9);
    return 0;
}
