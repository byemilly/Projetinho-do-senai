#include <iostream>
using namespace std;

int main() {
    int preco_mascara, dinheiro_batman;
    cout << "Digite o preço de uma máscara: ";
    cin >> preco_mascara;

    cout << "Digite a quantidade de dinheiro que o Batman possui: ";
    cin >> dinheiro_batman;

    if (dinheiro_batman >= preco_mascara) {
        cout << "O Batman pode comprar a máscara de reserva. Valor da compra: " << preco_mascara << ". Dinheiro restante: " << dinheiro_batman - preco_mascara << "." << endl;
    } else {
        cout << "O Batman não possui dinheiro suficiente para comprar a máscara de reserva." << endl;
    }

    return 0;
}
