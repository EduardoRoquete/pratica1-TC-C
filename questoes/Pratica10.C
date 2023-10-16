#include <stdio.h>//Questão 10
#include <math.h>

int main() {
    float raio;
    const float pi = 3.14159265359;
    float comprimento, area, volume;

    // Solicita ao usuário que insira o raio da esfera
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    // Calcula o comprimento da esfera
    comprimento = 2 * pi * raio;

    // Calcula a área da esfera
    area = pi * raio * raio;

    // Calcula o volume da esfera
    volume = (3.0 / 4.0) * pi * raio * raio * raio;

    // Apresenta os resultados
    printf("O comprimento da esfera é: %.2f\n", comprimento);
    printf("A área da esfera é: %.2f\n", area);
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}


