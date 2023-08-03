#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade" << endl;
    }

    return 0;
}
