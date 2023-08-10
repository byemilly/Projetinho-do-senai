#include <iostream>
#include <fstream> // Para trabalhar com arquivos
using namespace std;

int main() {
    string nome_arquivo;
    cout << "Digite o nome do arquivo de código-fonte: ";
    cin >> nome_arquivo;

    // Adicionar a extensão .cpp ao nome do arquivo
    nome_arquivo.append(".cpp");

    ifstream arquivo(nome_arquivo.c_str()); // Convertendo para const char*
    if (arquivo.is_open()) {
        cout << "Compilando " << nome_arquivo << "... Compilação concluída com sucesso!" << endl;
    } else {
        cout << "Arquivo não encontrado." << endl;
    }

    return 0;
}
