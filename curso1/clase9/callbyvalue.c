#include <stdio.h>

void callbyvalue(int c);

int main() {

  int c = 2;
  printf("%i\n", c);

  callbyvalue(c);

  printf("%i", c);

  return 0;
}

void callbyvalue(int c) {

  c = 5;

  return;
}
