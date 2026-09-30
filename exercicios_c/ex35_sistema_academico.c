#include <stdio.h>

int main() {
    char nome[50];
    int quantidade, i, aprovados, recuperacao, reprovados;
    float n1, n2, media, soma, maior, menor;

    aprovados = 0;
    recuperacao = 0;
    reprovados = 0;
    soma = 0;
    maior = 0;
    menor = 10;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("\nNome do aluno %d: ", i);
        scanf("%s", nome);
        printf("Nota da primeira avaliacao: ");
        scanf("%f", &n1);
        printf("Nota da segunda avaliacao: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;
        soma = soma + media;

        if (media >= 7) {
            printf("%s - Media %.2f - Aprovado\n", nome, media);
            aprovados = aprovados + 1;
        } else if (media >= 5) {
            printf("%s - Media %.2f - Recuperacao\n", nome, media);
            recuperacao = recuperacao + 1;
        } else {
            printf("%s - Media %.2f - Reprovado\n", nome, media);
            reprovados = reprovados + 1;
        }

        if (media > maior) {
            maior = media;
        }
        if (media < menor) {
            menor = media;
        }
    }

    printf("\nQuantidade de alunos: %d\n", quantidade);
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    printf("Media geral da turma: %.2f\n", soma / quantidade);
    printf("Maior media: %.2f\n", maior);
    printf("Menor media: %.2f\n", menor);

    return 0;
}
