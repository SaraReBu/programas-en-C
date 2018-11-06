#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1000
#endif

char *alloc(int pedido);

void afree(char *pc);

char buffer[BUFFER_SIZE];

char *m = buffer;

int main() {
  printf("%d\n", m);
  char *p1 = alloc(30);
  char *p2 = alloc(46);
  printf("%d\n", p1);
  printf("%d\n", p2);
  afree(p2);
  printf("%d\n", m);
  afree(p1);
  printf("%d\n", m);
}

char *alloc(int pedido) {
  m += pedido;
  return m - pedido;
}

void afree(char *pc) { m = pc; }
