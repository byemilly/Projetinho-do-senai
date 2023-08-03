#include <iostream>
using namespace std;

bool isPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i <= numero / 2; i++) {
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

    if (isPrimo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
