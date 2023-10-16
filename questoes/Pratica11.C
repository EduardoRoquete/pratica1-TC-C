#include <stdio.h>//Questão 11

int main() {
    int numero, i;

    // Solicita ao usuário que insira o número
    printf("Informe um número: ");
    scanf("%i", &numero);

    // Calcula e mostra a tabuada de multiplicação
    printf("Tabuada de %d:\n", numero);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}