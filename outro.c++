#include <iostream>
#include <vector>
#include <random>

//Função para gerar números aleatorios
int generateRandonNumbber(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() { 
    const int numNumbers = 6;
    const int minNumber = 1;
    const int maxNumber = 60;

    std::vector<int> choseNumbers;
    std::vector<int> winningNumbers;


    std::cout << "Bem-vindo ao Mega Senai!" << std::endl;

    do {
        choseNumbers.clear();
        winningNumbers.clear();

        //Solicitar ao jogador que escolha 6 números
        std::cout << "Escolha " << numNumbers << " números distintos entre " << minNumber << " e " << maxNumber << ":" << std:: endl;
          for (int i = 0; i < numNumbers; ++i) {
            int chosenNumber;
            std:: cin >> chosenNumber;
            choseNumbers.push_back(chosenNumber);         
            
            }

            //Realizar o sorteio dos números escolhidos com os números vencedores
            while (winningNumbers.size() < numNumbers) {
                int randomNumber = generateRandonNumbber(minNumber, maxNumber);
                if(std::find(winningNumbers.begin(), winningNumbers.end(), randomNumber) == winningNumbers.end()) {
                    winningNumbers.PUSH-BACK(randomNumber);

                }
            }


            //Comparar os números escolhidos com os números vencedores
            int numMatches = 0;
            for (int chosen : choseNumbers) {
                if (std::find(winningNumbers.begin(), winningNumbers.end(), chosen) != winningNumbers.end()) {
                    numMatches++;
                }
            }

            // Exibir os resultados
            std::cout << "Números sorteados: ";
            for (int num : winningNumbers) { 
                std::cout << num << " ";
            }
            std::cout << std::endl;


            if (numMatches == numNumbers) {
                std::cout << "Parabéns! Você acertou todos os números!" << std::endl;
                break;
            } else {
                std::cout << "Você acertou" << " números. Tente novamente!" << std::endl;
    }

       //Perguntar se o jogador deseja jogar novamente
       char playAgain;
       std::cout << "Deseja jogar novamente? (S/N): ";
       std::cin >> playAgain;
       if (playAgain != 'S' && playAgain != 's') {
         std::cout << "Obrigado por jogar o Mega Senai, ate a proxima" << std::endl;
         break;
       }
} while (true);

   
    return 0;
}

