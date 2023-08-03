#include <stdio.h>
#include <string.h>

#define TAMANHO_VETOR 5
#define TAMANHO_STRING 50

int main() {
    char paises[TAMANHO_VETOR][TAMANHO_STRING];
    int i, j;
    char temp[TAMANHO_STRING];

    // Preenchendo o vetor com os nomes dos países
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o nome do pais que venceu a Copa do Mundo Feminina: ");
        scanf("%s", paises[i]);
    }

    // Ordenando o vetor em ordem alfabética usando o algoritmo de seleção
    for (i = 0; i < TAMANHO_VETOR - 1; i++) {
        for (j = i + 1; j < TAMANHO_VETOR; j++) {
            if (strcmp(paises[i], paises[j]) > 0) {
                strcpy(temp, paises[i]);
                strcpy(paises[i], paises[j]);
                strcpy(paises[j], temp);
            }
        }
    }

    // Exibindo os nomes dos países em ordem alfabética
    printf("\nNomes dos paises que venceram a Copa do Mundo Feminina (em ordem alfabetica):\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%s\n", paises[i]);
    }

    return 0;
}
