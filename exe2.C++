#include <iostream>
#include <string>
#include <climits>

int main() {
    std::string planetas[8] = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter", "Saturno", "Urano", "Netuno"};
    int distancia[8] = {57, 108, 150, 228, 778, 1427, 2871, 4504};

    int planeta_mais_proximo = 0;
    int planeta_mais_distante = 0;
    int distancia_mais_proxima = INT_MAX;
    int distancia_mais_distante = 0;

    for (int i = 0; i < 8; i++) {
        if (distancia[i] < distancia_mais_proxima) {
            distancia_mais_proxima = distancia[i];
            planeta_mais_proximo = i;
        }
        if (distancia[i] > distancia_mais_distante) {
            distancia_mais_distante = distancia[i];
            planeta_mais_distante = i;
        }
    }

    std::cout << "Planeta mais próximo do Sol: " << planetas[planeta_mais_proximo] << std::endl;
    std::cout << "Planeta mais distante do Sol: " << planetas[planeta_mais_distante] << std::endl;

    return 0;
}
