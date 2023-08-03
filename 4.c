#include <stdio.h>

int main() {
    int vetor[8];
    int i;

    // Preenchendo o vetor com valores digitados pelo usuário
    for (i = 0; i < 8; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Exibindo apenas os elementos pares do vetor
    printf("\nElementos pares do vetor:\n");
    for (i = 0; i < 8; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
