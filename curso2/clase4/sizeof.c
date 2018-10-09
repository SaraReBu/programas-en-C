#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  char c;
  int i;
} chint;

int main() {
  chint h = {'a', 6};
  chint g[] = {h, h};
  printf("size of g:%lu in bits:%lu \n", sizeof(g), 8 * sizeof(g));
  printf("size of h:%lu in bits:%lu \n", sizeof(h), 8 * sizeof(h));
  printf("size of chint:%lu in bits:%lu \n", sizeof(chint), 8 * sizeof(chint));
  return 0;
}
