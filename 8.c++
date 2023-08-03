#include <iostream>
using namespace std;

string int_to_string(int num) {
    string result;
    while (num > 0) {
        char digit = '0' + num % 10;
        result = digit + result;
        num /= 10;
    }
    return result.empty() ? "0" : result;
}

bool verificar_numero_palindromo(int numero) {
    string num_str = int_to_string(numero);
    string num_inverso = num_str;
    reverse(num_inverso.begin(), num_inverso.end());
    return num_str == num_inverso;
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (verificar_numero_palindromo(numero)) {
        cout << numero << " é um número palíndromo." << endl;
    } else {
        cout << numero << " não é um número palíndromo." << endl;
    }

    return 0;
}
