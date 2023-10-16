#include <stdio.h>//Questão 8


int main() {
    float peso, novoPesoEngordar, novoPesoEmagrecer;

    // Solicita ao usuário que insira o peso atual
    printf("Digite o peso atual da pessoa: ");
    scanf("%f", &peso);

    // Calcula o novo peso após engordar 15%
    novoPesoEngordar = peso + (peso * 0.15);

    // Calcula o novo peso após emagrecer 20%
    novoPesoEmagrecer = peso - (peso * 0.20);

    // Apresenta os resultados
    printf("Se a pessoa engordar 15%%, o novo peso será: %.2f\n", novoPesoEngordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso será: %.2f\n", novoPesoEmagrecer);

    return 0;
}