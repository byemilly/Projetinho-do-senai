#include <stdio.h>

int main() {
    int vetor[6];
    int i, temp;

    // Preenchendo o vetor com valores digitados pelo usuário
    for (i = 0; i < 6; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Invertendo a ordem dos elementos no vetor
    for (i = 0; i < 3; i++) {
        temp = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = temp;
    }

    // Exibindo o vetor resultante após a inversão
    printf("\nVetor resultante apos a inversao:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
