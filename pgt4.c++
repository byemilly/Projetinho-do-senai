#include <iostream>
using namespace std;

int soma_digitos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

int main() {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    int resultado = soma_digitos(numero);
    cout << "A soma dos dígitos de " << numero << " é: " << resultado << endl;

    return 0;
}
