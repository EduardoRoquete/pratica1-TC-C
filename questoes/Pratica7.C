#include <stdio.h> //Questão 7


int main() {
    float salarioMinimo, salarioFuncionario, quantidadeSalariosMinimos;

    // Solicita ao usuário que insira o valor do salário mínimo
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    // Solicita ao usuário que insira o valor do salário do funcionário
    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salarioFuncionario);

    // Calcula a quantidade de salários mínimos
    quantidadeSalariosMinimos = salarioFuncionario / salarioMinimo;

    // Apresenta o resultado
    printf("O funcionário recebe %.2f salários mínimos.\n", quantidadeSalariosMinimos);

    return 0;
}