#include <stdio.h>

int main() {
  int n[] = {6, 5, 4, 3, 2, 1, 0};
  int *pn = n;
  char l[] = {'a', 'b', 'c'};
  char *pl = l;
  printf("Tamanio de int =%d, y tamanio de char =%d \n", sizeof(int),
         sizeof(char));
  for (int i = 0; i < (sizeof(n) / sizeof(int)); i++) {
    int *pi = (pn + i);
    printf("n[%d] = %d (%d)\n", i, *pi, pi);
  }
  for (int i = 0; i < (sizeof(l) / sizeof(char)); i++) {
    char *pi = (pl + i);
    printf("l[%d] = %c (%d)\n", i, *pi, pi);
  }
}
