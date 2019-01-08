#include "stack.h"
#include <stdio.h>

int main() {
  push('a');
  push('l');
  push('o');
  push('h');
  while (!is_empty()) {
    printf("%c", pop());
  }
}
