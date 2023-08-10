#include <iostream>

int main() {
    int temperaturas[5];
    int soma = 0;

    std::cout << "Digite a temperatura média dos planetas (em graus Celsius): " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> temperaturas[i];
        soma += temperaturas[i];
    }

    float media = static_cast<float>(soma) / 5;

    std::cout << "Temperatura média dos planetas: " << media << " graus Celsius" << std::endl;

    return 0;
}
