#include <iostream>

int main() {
    float magnitude[6];
    float soma = 0;

    std::cout << "Digite a magnitude das estrelas: " << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cin >> magnitude[i];
        soma += magnitude[i];
    }

    float media = soma / 6;

    std::cout << "Magnitude média das estrelas: " << media << std::endl;

    return 0;
}
