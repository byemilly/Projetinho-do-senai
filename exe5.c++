#include <iostream>

int main() {
    int massa[8] = {0, 0, 1, 0, 0, 3, 0, 2};

    int massa_total = 0;
    for (int i = 0; i < 8; i++) {
        massa_total += massa[i];
    }

    std::cout << "Massa total dos planetas anões (em massa terrestre): " << massa_total << std::endl;

    return 0;
}
