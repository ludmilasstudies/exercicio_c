#include <stdio.h>

int main() {
    int voto, c1, c2, c3, total;

    c1 = 0;
    c2 = 0;
    c3 = 0;

    printf("Digite o voto (1, 2 ou 3) ou 0 para encerrar: ");
    scanf("%d", &voto);

    while (voto != 0) {
        if (voto == 1) {
            c1 = c1 + 1;
        } else if (voto == 2) {
            c2 = c2 + 1;
        } else if (voto == 3) {
            c3 = c3 + 1;
        } else {
            printf("Voto invalido.\n");
        }

        printf("Digite o voto (1, 2 ou 3) ou 0 para encerrar: ");
        scanf("%d", &voto);
    }

    total = c1 + c2 + c3;

    printf("Votos do candidato 1: %d\n", c1);
    printf("Votos do candidato 2: %d\n", c2);
    printf("Votos do candidato 3: %d\n", c3);
    printf("Total de votos: %d\n", total);

    if (c1 > c2 && c1 > c3) {
        printf("Vencedor: Candidato 1\n");
    } else if (c2 > c1 && c2 > c3) {
        printf("Vencedor: Candidato 2\n");
    } else if (c3 > c1 && c3 > c2) {
        printf("Vencedor: Candidato 3\n");
    } else {
        printf("Houve empate.\n");
    }

    return 0;
}
