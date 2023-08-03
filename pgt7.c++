#include <iostream>
using namespace std;

void converter_tempo(int segundos, int& horas, int& minutos, int& segundos_restantes) {
    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;
}

int main() {
    int segundos;
    cout << "Digite uma quantidade de tempo em segundos: ";
    cin >> segundos;

    int horas, minutos, segundos_restantes;
    converter_tempo(segundos, horas, minutos, segundos_restantes);

    cout << "Tempo convertido: " << horas << " horas, " << minutos << " minutos e " << segundos_restantes << " segundos." << endl;

    return 0;
}
