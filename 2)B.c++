#include <stdio.h>

int main() {
   int tamanho;
   printf("Digite o tamanho do array: ");
   scanf("%d", &tamanho);

   int array[tamanho];
   printf("Digite os elementos do array: ");
   for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
   }

   int maior = array[0];
   for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
   }

   printf("O maior elemento do array é: %d\n", maior);
   return 0;
}
