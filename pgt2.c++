#include <iostream>
using namespace std;

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (eh_primo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
