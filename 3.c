#include <stdio.h>

int main() {
    int vetor[10];
    int i, soma = 0;

    // Preenchendo o vetor com valores digitados pelo usuário
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);

        // Somando o valor ao acumulador 'soma'
        soma += vetor[i];
    }

    // Exibindo a soma de todos os elementos do vetor
    printf("A soma de todos os elementos do vetor e: %d\n", soma);

    return 0;
}
