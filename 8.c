#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    int soma = 0;

    // Preenchendo o vetor com valores digitados pelo usuário
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);

        // Somando os valores ao acumulador 'soma'
        soma += vetor[i];
    }

    // Calculando a média
    float media = (float)soma / 10;

    // Exibindo a média dos valores presentes no vetor
    printf("A media dos valores presentes no vetor e: %.2f\n", media);

    return 0;
}
