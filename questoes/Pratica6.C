#include <stdio.h>//Questão 6

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    // Solicita ao usuário que insira a temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    // Calcula a temperatura em Fahrenheit
    temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;

    // Apresenta o resultado
    printf("A temperatura em graus Fahrenheit é: %.2f\n", temperaturaFahrenheit);

    return 0;
}