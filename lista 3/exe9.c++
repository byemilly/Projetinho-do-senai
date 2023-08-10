#include <iostream>
#include <string>
#include <algorithm> // Para a função sort()
using namespace std;

int main() {
    string aliado1, aliado2, aliado3;
    cout << "Digite o nome do primeiro aliado do Batman: ";
    getline(cin, aliado1);

    cout << "Digite o nome do segundo aliado do Batman: ";
    getline(cin, aliado2);

    cout << "Digite o nome do terceiro aliado do Batman: ";
    getline(cin, aliado3);

    // Colocando os nomes dos aliados em ordem alfabética
    string nomes[3] = {aliado1, aliado2, aliado3};
    sort(nomes, nomes + 3);

    cout << "Os aliados do Batman em ordem alfabética são: " << nomes[0] << ", " << nomes[1] << " e " << nomes[2] << "." << endl;

    return 0;
}
