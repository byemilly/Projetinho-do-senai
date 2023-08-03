#include <iostream>
using namespace std;

bool verificar_numero_perfeito(int num) {
    int soma_divisores = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }
    return soma_divisores == num;
}

int main() {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (verificar_numero_perfeito(numero)) {
        cout << numero << " é um número perfeito." << endl;
    } else {
        cout << numero << " não é um número perfeito." << endl;
    }

    return 0;
}
