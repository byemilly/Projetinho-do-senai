#include <iostream>
#include <string>

int main() {
    std::string constelacoes[5] = {"Órion", "Andrômeda", "Centauro", "Cassiopeia", "Touro"};

    std::string constelacao_desejada;
    std::cout << "Digite o nome de uma constelação: ";
    std::getline(std::cin >> std::ws, constelacao_desejada);

    bool encontrada = false;
    for (int i = 0; i < 5; i++) {
        if (constelacoes[i] == constelacao_desejada) {
            encontrada = true;
            break;
        }
    }

    if (encontrada) {
        std::cout << "A constelação está presente no vetor." << std::endl;
    } else {
        std::cout << "A constelação não está presente no vetor." << std::endl;
    }

    return 0;
}
