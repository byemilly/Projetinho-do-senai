#include <iostream>
using namespace std;

int main() {
    const int tamanho_maximo = 100;
    int numeros[tamanho_maximo];
    int tamanho = 0;

    while (true) {
        int numero;
        cout << "Digite um número inteiro (digite 0 para sair): ";
        cin >> numero;
        if (numero == 0) {
            break;
        }
        numeros[tamanho] = numero;
        tamanho++;
    }

    if (tamanho > 0) {
        int maior_valor = numeros[0];
        int menor_valor = numeros[0];

        for (int i = 1; i < tamanho; i++) {
            if (numeros[i] > maior_valor) {
                maior_valor = numeros[i];
            }
            if (numeros[i] < menor_valor) {
                menor_valor = numeros[i];
            }
        }

        cout << "Maior valor digitado: " << maior_valor << endl;
        cout << "Menor valor digitado: " << menor_valor << endl;
    } else {
        cout << "Nenhum número foi digitado." << endl;
    }

    return 0;
}
