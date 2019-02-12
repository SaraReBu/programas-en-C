#include "list.h"
#include <stdio.h>

int main() {
  append("Adrian");
  append("Silvia");
  append("Ian");
  for (int i = 0; i < count(); i++) {
    printf("%s\n", item_at(i));
  }
}
