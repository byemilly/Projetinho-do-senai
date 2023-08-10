#include <iostream>
using namespace std;

int main() {
    int quantidade, valor_unitario;
    cout << "Digite a quantidade de Bat-Saqueadores que deseja comprar: ";
    cin >> quantidade;

    cout << "Digite o valor unitário de cada Bat-Saqueador: ";
    cin >> valor_unitario;

    int valor_total = quantidade * valor_unitario;
    cout << "Valor total da compra: " << valor_total << endl;

    return 0;
}
