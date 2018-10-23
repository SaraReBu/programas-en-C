#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1000
#endif

char buffer[1000];
char *marcapaginas = &buffer[0];

char *alloc(int pedido);

char *alloc(int pedido) {
  marcapaginas += pedido;
  return marcapaginas - pedido;
}
