#include <iostream>
#include <cstdlib>
#include <ctime>

// Função para que o jogo deve solicitar ao jogador que escolha 6 números distintos entre 1 e 60.
bool verificarNumero (char numero) {
    return std::isalpha(verificarNumero);
}

int main() {
        // Numero a ser adivinhado e variáveis de controle
    std::string numerosdistintosentre 1 e 60= "1a60";
    int maxTentativas = 6;
    int tentativas = 0;
    bool acertou = false;

    // Inicializar gerador de números aleatórios
    std::srand(std::time(0));

    // Sortear 6 numeros
    char numeroSorteado = numero[std::rand() % numero.length()];

    // Loop para adivinhar
    while (tentativas < maxTentativas) {
        char tentativa;
        std::cout << "Digite uma numero: ";
        std::cin >> tentativa;

        if (tentativa == letraSorteada) {
            acertou = true;
            break;
        } else {
            std::cout << "Tentativa incorreta." << std::endl;
            tentativas++;
        }
    }

    // Exibir resultado
    std::cout << "o numero sorteado era: " << numeroSorteado << std::endl;
    std::cout << "Quantidade de tentativas: " << tentativas << std::endl;

    if (acertou) {
        std::cout << "Parabéns, você acertou os numeros!" << std::endl;
    } else {
        std::cout << "Você esgotou o limite de tentativas. Tente novamente!" << std::endl;
    }
    // Perguntar ao jogador se ele deseja jogar novamente
        std::cout << "Deseja jogar novamente? (S/N): ";
        std::cin >> opcao;
    } while (opcao == 'S' || opcao == 's');
   
    std::cout << "Obrigado por jogar! Ate a proxima!" << std::endl;
   
    return 0;
}
