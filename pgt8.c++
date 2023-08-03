#include <iostream>
using namespace std;

bool eh_numero_triangular(int numero) {
    int soma = 0;
    int i = 1;
    while (soma < numero) {
        soma += i;
        i++;
    }
    return soma == numero;
}

int main() {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (eh_numero_triangular(numero)) {
        cout << numero << " é um número triangular." << endl;
    } else {
        cout << numero << " não é um número triangular." << endl;
    }

    return 0;
}
