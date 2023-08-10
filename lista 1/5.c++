#include <iostream>
using namespace std;

bool verificar_numero_primo(int numero, int divisor = 2) {
    if (numero <= 2) {
        return numero == 2;
    }
    if (numero % divisor == 0) {
        return false;
    }
    if (divisor * divisor > numero) {
        return true;
    }
    return verificar_numero_primo(numero, divisor + 1);
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (verificar_numero_primo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
