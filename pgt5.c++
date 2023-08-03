#include <iostream>
#include <cctype> // Para a função tolower()
using namespace std;

bool eh_palindromo(string palavra) {
    int inicio = 0;
    int fim = palavra.length() - 1;

    while (inicio < fim) {
        if (tolower(palavra[inicio]) != tolower(palavra[fim])) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() {
    string texto;
    cout << "Digite uma palavra ou frase: ";
    getline(cin, texto);

    if (eh_palindromo(texto)) {
        cout << "É um palíndromo!" << endl;
    } else {
        cout << "Não é um palíndromo." << endl;
    }

    return 0;
}
