#include <iostream>
using namespace std;

double calcular_pi(int iteracoes) {
    double pi = 0.0;
    int sinal = 1;

    for (int i = 0; i < iteracoes; i++) {
        double termo = 1.0 / (2 * i + 1);
        pi += sinal * termo;
        sinal *= -1;
    }

    return 4 * pi;
}

int main() {
    int iteracoes;
    cout << "Digite o número de iterações para calcular o valor de π: ";
    cin >> iteracoes;

    double pi = calcular_pi(iteracoes);
    cout << "O valor aproximado de π é: " << pi << endl;

    return 0;
}
