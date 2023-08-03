#include <iostream>
using namespace std;

int main() {
    bool valor1, valor2;
    cout << "Digite o primeiro valor (0 para false, 1 para true): ";
    cin >> valor1;
    cout << "Digite o segundo valor (0 para false, 1 para true): ";
    cin >> valor2;

    bool resultado_and = valor1 && valor2;
    bool resultado_or = valor1 || valor2;
    bool resultado_not1 = !valor1;
    bool resultado_not2 = !valor2;

    cout << "Resultado do AND: " << resultado_and << endl;
    cout << "Resultado do OR: " << resultado_or << endl;
    cout << "Resultado do NOT do primeiro valor: " << resultado_not1 << endl;
    cout << "Resultado do NOT do segundo valor: " << resultado_not2 << endl;

    return 0;
}
