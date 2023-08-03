#include <iostream>
#include <string>

int main() {
    std::string luas[7] = {"Europa", "Titã", "Calisto", "Lua", "Ganimedes", "Tritão", "Caronte"};

    std::cout << "Nomes das luas em ordem inversa:" << std::endl;
    for (int i = 6; i >= 0; i--) {
        std::cout << luas[i] << std::endl;
    }

    return 0;
}
