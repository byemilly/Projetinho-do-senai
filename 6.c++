#include <iostream>
using namespace std;

string verificar_tipo_triangulo(double lado1, double lado2, double lado3) {
    if (lado1 == lado2 && lado1 == lado3) {
        return "equilátero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return "isósceles";
    } else {
        return "escaleno";
    }
}

int main() {
    double lado1, lado2, lado3;
    cout << "Digite o valor do primeiro lado do triângulo: ";
    cin >> lado1;
    cout << "Digite o valor do segundo lado do triângulo: ";
    cin >> lado2;
    cout << "Digite o valor do terceiro lado do triângulo: ";
    cin >> lado3;

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        string tipo = verificar_tipo_triangulo(lado1, lado2, lado3);
        cout << "É possível formar um triângulo e ele é " << tipo << "." << endl;
    } else {
        cout << "Não é possível formar um triângulo com esses valores." << endl;
    }

    return 0;
}
