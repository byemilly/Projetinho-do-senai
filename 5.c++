#include <iostream>
#include <limits> // Para usar o std::numeric_limits

using namespace std;

int main() {
    const int tamanhoVetor = 7;
    float vetor[tamanhoVetor];

    // Preenchendo o vetor com números reais digitados pelo usuário
    cout << "Digite " << tamanhoVetor << " numeros reais:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Encontrando o maior e o menor valor no vetor
    float maior = numeric_limits<float>::min(); // Valor mínimo que um float pode assumir
    float menor = numeric_limits<float>::max(); // Valor máximo que um float pode assumir

    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Exibindo o maior e o menor valor
    cout << "O maior valor no vetor e: " << maior << endl;
    cout << "O menor valor no vetor e: " << menor << endl;

    return 0;
}
