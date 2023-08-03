#include <stdio.h>

int main() {
   float num1, num2, num3;
   printf("Digite três números: ");
   scanf("%f %f %f", &num1, &num2, &num3);

   float media = (num1 + num2 + num3) / 3;
   printf("A média dos números é: %.2f\n", media);
   return 0;
}
