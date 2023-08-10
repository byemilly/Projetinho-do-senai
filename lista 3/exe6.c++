#include <iostream>
using namespace std;

int main() {
    int coordenada_x, coordenada_y;
    cout << "Digite a coordenada X (horizontal) do possível esconderijo do Coringa: ";
    cin >> coordenada_x;

    cout << "Digite a coordenada Y (vertical) do possível esconderijo do Coringa: ";
    cin >> coordenada_y;

    if (coordenada_x >= -100 && coordenada_x <= 100 && coordenada_y >= -50 && coordenada_y <= 50) {
        cout << "Localização possível do esconderijo do Coringa." << endl;
    } else {
        cout << "Coordenadas fora dos limites da cidade." << endl;
    }

    return 0;
}
