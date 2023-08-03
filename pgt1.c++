#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    cout << "Divisores de " << numero << ": ";
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
