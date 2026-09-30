/*
  DESAFIO FINAL - Sistema de pedidos de uma lanchonete

  Problema: a lanchonete precisa somar o valor dos itens de um pedido.
  Entradas: codigo do item e quantidade (0 encerra o pedido).
  Processamento: soma preco x quantidade de cada item.
  Saida: valor total do pedido.

  Cardapio:
  1 - Hamburguer  R$ 15,00
  2 - Batata      R$ 8,00
  3 - Refrigerante R$ 5,00
*/
#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    total = 0;

    printf("1 - Hamburguer   R$ 15.00\n");
    printf("2 - Batata       R$ 8.00\n");
    printf("3 - Refrigerante R$ 5.00\n");
    printf("0 - Finalizar pedido\n");

    printf("\nDigite o codigo do item: ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        if (codigo == 1) {
            preco = 15;
        } else if (codigo == 2) {
            preco = 8;
        } else if (codigo == 3) {
            preco = 5;
        } else {
            preco = 0;
            printf("Codigo invalido.\n");
        }

        if (preco > 0) {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            total = total + preco * quantidade;
        }

        printf("\nDigite o codigo do item: ");
        scanf("%d", &codigo);
    }

    printf("Total do pedido: R$ %.2f\n", total);

    return 0;
}
