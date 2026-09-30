#include <stdio.h>

int main() {
    float n1, n2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        printf("Resultado: %.2f\n", n1 + n2);
    } else if (operacao == '-') {
        printf("Resultado: %.2f\n", n1 - n2);
    } else if (operacao == '*') {
        printf("Resultado: %.2f\n", n1 * n2);
    } else if (operacao == '/') {
        if (n2 == 0) {
            printf("Erro: divisao por zero!\n");
        } else {
            printf("Resultado: %.2f\n", n1 / n2);
        }
    } else {
        printf("Operacao invalida!\n");
    }

    return 0;
}
