#include "queue.h"
#include <stdio.h>

int main() {
  enqueue("Juan");
  enqueue("Maria");
  enqueue("Jorge");
  while (!is_empty()) {
    printf("%s \n", dequeue());
  }
}
