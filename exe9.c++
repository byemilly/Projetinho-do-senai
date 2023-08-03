#include <iostream>

int main() {
    float luminosidade[10] = {80, 105, 90, 120, 150, 75, 200, 180, 50, 110};

    int estrelas_com_luminosidade_superior_100x = 0;
    for (int i = 0; i < 10; i++) {
        if (luminosidade[i] > 100) {
            estrelas_com_luminosidade_superior_100x++;
        }
    }

    std::cout << "Número de estrelas com luminosidade superior a 100 vezes a luminosidade do Sol: " << estrelas_com_luminosidade_superior_100x << std::endl;

    return 0;
}
