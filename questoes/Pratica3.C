#include <stdio.h>//Questão 3

int main() {
    float cotacaoDolar, valorDolar, valorReal;

    // Solicita ao usuário que insira a cotação do dólar
    printf("Digite a cotação do dólar em reais: ");
    scanf("%f", &cotacaoDolar);

    // Solicita ao usuário que insira o valor em dólares
    printf("Digite o valor em dólares: ");
    scanf("%f", &valorDolar);

    // Calcula o valor em reais
    valorReal = cotacaoDolar * valorDolar;

    printf("O valor em reais é: R$ %.2f\n", valorReal);

    return 0;
}