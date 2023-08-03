#include <stdio.h>

int main() {
   int n = 10;
   int soma = 0;

   for (int i = 0; i < n; i++) {
        soma += i;
   }

   printf("A soma dos números de 1 a %d é: %d\n", n, soma);
   return 0;
}
