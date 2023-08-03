#include <iostream>
using namespace std;

void sequencia_fibonacci(int numero) {
    int a = 0, b = 1, c = 0;
    cout << "Sequência de Fibonacci até o valor " << numero << ": ";

    while (c <= numero) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    sequencia_fibonacci(numero);

    return 0;
}
