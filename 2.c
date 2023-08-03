#include <stdio.h>

#define TAMANHO_VETOR 8

int main() {
    char paises[TAMANHO_VETOR][50] = {
        "Brasil", "Estados Unidos", "Alemanha", "Noruega", 
        "Japao", "Inglaterra", "Italia", "Suecia"
    };

    int titulos[TAMANHO_VETOR] = {7, 4, 2, 1, 1, 0, 0, 0};

    // Exibindo os países que nunca venceram a Copa do Mundo Feminina
    printf("Paises que nunca venceram a Copa do Mundo Feminina:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (titulos[i] == 0) {
            printf("%s\n", paises[i]);
        }
    }

    return 0;
}
