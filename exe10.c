#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[4];
    int i, palpite;
    int acertou = 0;

    // Inicializando a semente para gerar valores aleatórios
    srand(time(NULL));

    // Preenchendo o vetor com valores aleatórios entre 1 e 10
    for (i = 0; i < 4; i++) {
        vetor[i] = rand() % 10 + 1;
    }

    // Solicitando o palpite do usuário
    printf("Tente adivinhar um dos numeros do vetor (entre 1 e 10): ");
    scanf("%d", &palpite);

    // Verificando se o palpite está correto
    for (i = 0; i < 4; i++) {
        if (vetor[i] == palpite) {
            acertou = 1;
            break;
        }
    }

    // Exibindo o resultado
    if (acertou) {
        printf("Parabens! Voce acertou.\n");
    } else {
        printf("Que pena! Voce errou.\n");
    }

    // Exibindo o vetor gerado (opcional)
    printf("Vetor gerado: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
