#include <iostream>
using namespace std;

int main() {
    int quantidade_herois, quantidade_viloes;
    cout << "Digite a quantidade de heróis capturados pelo Batman: ";
    cin >> quantidade_herois;

    cout << "Digite a quantidade de vilões capturados pelo Batman: ";
    cin >> quantidade_viloes;

    if (quantidade_herois > quantidade_viloes) {
        cout << "Batman capturou mais heróis!" << endl;
    } else if (quantidade_viloes > quantidade_herois) {
        cout << "Batman capturou mais vilões!" << endl;
    } else {
        cout << "Batman capturou o mesmo número de heróis e vilões!" << endl;
    }

    return 0;
}
