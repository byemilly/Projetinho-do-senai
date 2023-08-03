#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;
    cout << "Digite o terceiro número inteiro: ";
    cin >> num3;

    int maior = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    cout << "O maior valor é: " << maior << endl;

    return 0;
}
