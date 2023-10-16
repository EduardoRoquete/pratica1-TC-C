#include <stdio.h>//Questão 9

#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    // Solicita ao usuário que insira os valores dos catetos
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    // Calcula a hipotenusa usando o Teorema de Pitágoras
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    // Apresenta o resultado
    printf("O valor da hipotenusa é: %.2f\n", hipotenusa);

    return 0;
}