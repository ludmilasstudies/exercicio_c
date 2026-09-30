#include <stdio.h>

int main() {
    int opcao;
    float saldo, valor;

    saldo = 1000;
    opcao = 0;

    while (opcao != 4) {
        printf("\n1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Valor do deposito: ");
            scanf("%f", &valor);
            saldo = saldo + valor;
            printf("Deposito realizado.\n");
        } else if (opcao == 3) {
            printf("Valor do saque: ");
            scanf("%f", &valor);
            if (valor <= saldo) {
                saldo = saldo - valor;
                printf("Saque realizado.\n");
            } else {
                printf("Saldo insuficiente.\n");
            }
        } else if (opcao == 4) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}
