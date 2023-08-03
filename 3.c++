#include <iostream>

using namespace std;

int main() {
    const int tamanhoVetor = 10;
    int idades[tamanhoVetor];

    // Preenchendo o vetor com as idades das jogadoras
    cout << "Digite as idades das jogadoras:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite a idade da jogadora " << i + 1 << ": ";
        cin >> idades[i];
    }

    // Calculando a soma das idades
    int somaIdades = 0;
    for (int i = 0; i < tamanhoVetor; i++) {
        somaIdades += idades[i];
    }

    // Calculando a média das idades
    float mediaIdades = static_cast<float>(somaIdades) / tamanhoVetor;

    // Exibindo a média das idades
    cout << "A media das idades das jogadoras e: " << mediaIdades << endl;

    return 0;
}
