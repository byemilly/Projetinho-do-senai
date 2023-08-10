#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string planetas[5] = {"Vênus", "Terra", "Marte", "Júpiter", "Saturno"};

    std::sort(planetas, planetas + 5);

    std::cout << "Nomes dos planetas em ordem alfabética:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << planetas[i] << std::endl;
    }

    return 0;
}
