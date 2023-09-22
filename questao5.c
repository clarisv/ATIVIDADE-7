#include <stdio.h>

//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares

int main() {

    int numeracao, soma = 0, pares = 0;

    for(numeracao = 1; numeracao <= 50; numeracao ++ ){
        pares = pares + 2;
        soma += pares;
    }

    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma, pares, numeracao);

    return 0;
}


