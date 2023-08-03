#include <iostream>
using namespace std;

int main() {
    int numero, pares = 0, impares = 0;

    while (true) {
        cout << "Digite um número inteiro (digite 0 para sair): ";
        cin >> numero;

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;

    return 0;
}
