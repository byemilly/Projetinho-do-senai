#include <iostream>

int main() {
    int velocidades[6];
    int soma = 0;

    std::cout << "Digite a velocidade de rotação dos planetas (em km/h): " << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cin >> velocidades[i];
        soma += velocidades[i];
    }

    float media = static_cast<float>(soma) / 6;

    std::cout << "Média das velocidades de rotação dos planetas: " << media << " km/h" << std::endl;

    return 0;
}
