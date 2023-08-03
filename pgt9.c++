#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime>   // Para a função time()
using namespace std;

int main() {
    srand(time(0)); // Semente o gerador de números aleatórios com o tempo atual

    int numero_secreto = rand() % 100 + 1;
    int palpite, tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação! Tente adivinhar o número secreto entre 1 e 100." << endl;

    do {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite > numero_secreto) {
            cout << "Seu palpite é maior que o número secreto. Tente novamente!" << endl;
        } else if (palpite < numero_secreto) {
            cout << "Seu palpite é menor que o número secreto. Tente novamente!" << endl;
        } else {
            cout << "Parabéns, você acertou o número secreto (" << numero_secreto << ") em " << tentativas << " tentativas!" << endl;
            break;
        }
    } while (true);

    return 0;
}
