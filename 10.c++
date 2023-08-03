#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime>   // Para a função time()
using namespace std;

int simular_lancamento_dado() {
    int lancamentos = 0;
    while (true) {
        int lancamento = rand() % 6 + 1;
        lancamentos++;
        cout << "Lançamento " << lancamentos << ": " << lancamento << endl;
        if (lancamento == 6) {
            break;
        }
    }
    return lancamentos;
}

int main() {
    srand(time(0)); // Semente o gerador de números aleatórios com o tempo atual
    int total_lancamentos = simular_lancamento_dado();
    cout << "Total de lançamentos necessários para obter 6: " << total_lancamentos << endl;

    return 0;
}
