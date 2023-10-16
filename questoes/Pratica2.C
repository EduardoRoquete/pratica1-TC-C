#include <stdio.h>

int main() {
    int anoNascimento, anoAtual;
    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    // Calcula a idade no ano atual
    int idadeAtual = anoAtual - anoNascimento;
    
    // Calcula a idade em 2050
    int ano2050 = 2050;
    int idade2050 = ano2050 - anoNascimento;
    
    printf("A idade da pessoa no ano atual e: %d anos\n", idadeAtual);
    printf("A idade da pessoa em 2050 sera: %d anos\n", idade2050);
    
    return 0;
}