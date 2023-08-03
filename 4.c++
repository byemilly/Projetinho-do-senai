#include <iostream>
using namespace std;

double calcular_media(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return static_cast<double>(soma) / tamanho;
}

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
        double media = calcular_media(numeros, tamanho);
        cout << "A média dos números digitados é: " << media << endl;
    } else {
        cout << "Nenhum número foi digitado." << endl;
    }

    return 0;
}
