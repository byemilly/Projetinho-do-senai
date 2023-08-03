#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetorResultado[5];
    int i;

    // Preenchendo o primeiro vetor com valores digitados pelo usuário
    printf("Digite os valores para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    // Preenchendo o segundo vetor com valores digitados pelo usuário
    printf("\nDigite os valores para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Realizando a soma dos elementos e armazenando no terceiro vetor
    for (i = 0; i < 5; i++) {
        vetorResultado[i] = vetor1[i] + vetor2[i];
    }

    // Exibindo o conteúdo do terceiro vetor (resultado)
    printf("\nResultado da soma dos vetores:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
