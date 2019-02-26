#include <stdio.h>

int binary_search(int item);

int list[] = {1, 3, 5, 7, 9};

int main() {
  printf("%d\n", binary_search(1));
  printf("%d\n", binary_search(3));
  printf("%d\n", binary_search(2));
  printf("%d\n", binary_search(9));
}
