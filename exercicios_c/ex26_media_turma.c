#include <stdio.h>

int main() {
    int quantidade, i;
    float nota, soma, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    soma = 0;
    for (i = 1; i <= quantidade; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("Media geral da turma: %.2f\n", media);

    return 0;
}
