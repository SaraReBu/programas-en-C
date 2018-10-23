#include <stdio.h>

int main() {
  int digitos[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  for (int i = 0; i < 10; i++) {
    printf("Digitos[%d] = %d \n", i, digitos[i]);
  }
  int *pdigitos = &digitos[0];
  for (int i = 0; i < 10; i++) {
    printf("Pdigitos[%d] = %d \n", i, *(pdigitos + i));
  }
}
