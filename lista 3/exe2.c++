#include <iostream>
using namespace std;

int main() {
    int velocidade, altitude;
    cout << "Digite a velocidade desejada para o voo (em km/h): ";
    cin >> velocidade;

    cout << "Digite a altitude desejada para o voo (em metros do solo): ";
    cin >> altitude;

    cout << "Batwing decolando a " << velocidade << " km/h a " << altitude << " metros do solo." << endl;

    return 0;
}
