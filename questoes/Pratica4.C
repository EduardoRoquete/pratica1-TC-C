#include <stdio.h>//Questão 4

int main() {
    float salarioAtual, novoSalario;

    // Solicita ao usuário que insira o salário atual
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    // Calcula o novo salário com um aumento de 25%
    novoSalario = salarioAtual + (salarioAtual * 0.25); // Aumento de 25% é o mesmo que multiplicar por 0.25

    printf("O novo salário do funcionário é: R$ %.2f\n", novoSalario);

    return 0;
}