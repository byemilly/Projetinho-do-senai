#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    cout << "Digite o nome do comissário: ";
    getline(cin, nome);

    cout << "Comissário " << nome << ", acione o Bat-Sinal!" << endl;

    return 0;
}
