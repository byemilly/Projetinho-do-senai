#include <iostream>
using namespace std;

double calcular_area_retangulo(double base, double altura) {
    return base * altura;
}

int main() {
    double base, altura;
    cout << "Digite a medida da base do retângulo: ";
    cin >> base;
    cout << "Digite a medida da altura do retângulo: ";
    cin >> altura;

    double area = calcular_area_retangulo(base, altura);
    cout << "A área do retângulo é: " << area << endl;

    return 0;
}
