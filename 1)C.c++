#include <stdio.h>

int main() {
   char nome[50]; // Aumentando a capacidade do array para permitir palavras maiores
   printf("Digite seu nome: ");
   scanf("%s", nome);
   printf("Olá, %s!\n", nome);
   return 0;
}
