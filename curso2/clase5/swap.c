#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int a = 5;
  int b = 7;
  printf("a vale %d y b vale %d \n", a, b);
  swap(&a, &b);
  printf("a vale %d y b vale %d\n", a, b);
}

void swap(int *a, int *b) {
  int c;
  c = *a;
  *a = *b;
  *b = c;
  printf("a vale %d y b vale %d \n", *a, *b);
}
