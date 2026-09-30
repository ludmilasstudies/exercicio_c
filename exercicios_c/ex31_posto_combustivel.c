#include <stdio.h>

int main() {
    float litros, preco, valorBruto, desconto, valorFinal;

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);
    printf("Digite o preco do litro: ");
    scanf("%f", &preco);

    valorBruto = litros * preco;

    if (litros < 20) {
        desconto = 0;
    } else if (litros <= 40) {
        desconto = valorBruto * 3 / 100;
    } else {
        desconto = valorBruto * 5 / 100;
    }

    valorFinal = valorBruto - desconto;

    printf("Valor bruto: R$ %.2f\n", valorBruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
