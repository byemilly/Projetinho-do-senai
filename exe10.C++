#include <iostream>
using namespace std;

int main() {
    float nota1, nota2;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;
    if (media >= 7) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
