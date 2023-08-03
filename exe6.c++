#include <iostream>

int main() {
    float massa[7] = {2.5, 3.1, 1.8, 4.2, 2.9, 3.7, 3.5};

    int estrelas_com_massa_superior_3x = 0;
    for (int i = 0; i < 7; i++) {
        if (massa[i] > 3) {
            estrelas_com_massa_superior_3x++;
        }
    }

    std::cout << "Número de estrelas com massa superior a 3 vezes a massa do Sol: " << estrelas_com_massa_superior_3x << std::endl;

    return 0;
}
