#include <iostream>
using namespace std;

int main() {
    int distancia;
    cout << "Digite a distância do inimigo detectado pelo Bat-Radar (em metros): ";
    cin >> distancia;

    if (distancia <= 100) {
        cout << "Perigo muito próximo! Prepare-se para o combate!" << endl;
    } else {
        cout << "Inimigo detectado, mas ainda não é uma ameaça iminente." << endl;
    }

    return 0;
}
