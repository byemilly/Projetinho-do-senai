#include <stdio.h>

int main() {
    char vetor[5];
    char letra;
    int i;
    int encontrada = 0;

    // Preenchendo o vetor com letras do alfabeto digitadas pelo usuário
    for (i = 0; i < 5; i++) {
        printf("Digite uma letra do alfabeto para a posicao %d: ", i);
        scanf(" %c", &vetor[i]); // Colocamos um espaço antes do %c para ignorar possíveis espaços em branco
    }

    // Solicitando a letra que o usuário deseja verificar
    printf("Digite a letra que deseja verificar: ");
    scanf(" %c", &letra);

    // Verificando se a letra está presente no vetor
    for (i = 0; i < 5; i++) {
        if (vetor[i] == letra) {
            encontrada = 1;
            break; // Se encontrou a letra, podemos parar a busca
        }
    }

    // Exibindo o resultado da busca
    if (encontrada) {
        printf("A letra '%c' foi encontrada no vetor.\n", letra);
    } else {
        printf("A letra '%c' nao foi encontrada no vetor.\n", letra);
    }

    return 0;
}
