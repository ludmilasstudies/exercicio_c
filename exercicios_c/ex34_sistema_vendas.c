#include <stdio.h>

int main() {
    char produto[50];
    int quantidade, continuar, numVendas, totalProdutos;
    float preco, totalVenda, faturamento, maiorVenda;

    numVendas = 0;
    totalProdutos = 0;
    faturamento = 0;
    maiorVenda = 0;
    continuar = 1;

    while (continuar == 1) {
        printf("\nNome do produto: ");
        scanf("%s", produto);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: ");
        scanf("%f", &preco);

        totalVenda = quantidade * preco;
        printf("Total da venda: R$ %.2f\n", totalVenda);

        numVendas = numVendas + 1;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("Registrar outra venda? (1 = Sim, 0 = Nao): ");
        scanf("%d", &continuar);
    }

    printf("\nQuantidade de vendas: %d\n", numVendas);
    printf("Total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f\n", maiorVenda);

    return 0;
}
