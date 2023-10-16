#include <stdio.h>//Questão 5

int main() {
    float diagonalMaior, diagonalMenor, area;

    // Solicita ao usuário que insira as diagonais
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);

    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    // Calcula a área do losango
    area = (diagonalMaior * diagonalMenor) / 2;

    // Apresenta o resultado
    printf("A área do losango é: %.2f\n", area);

    return 0;
}