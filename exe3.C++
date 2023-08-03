#include <iostream>
using namespace std;

int main() {
    int numero, fatorial = 1;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Não é possível calcular o fatorial de um número negativo." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " é: " << fatorial << endl;
    }

    return 0;
}
