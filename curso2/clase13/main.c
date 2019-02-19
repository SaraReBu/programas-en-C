#include "list.h"
#include <stdio.h>

int main() {
  append("Adrian");
  append("Silvia");
  prepend("Ian");
  insert_at("Jose", 1);
  append("Laura");
  insert_at("Beatriz", 3);
  remove_at(4);
  remove_at(0);
  for (int i = 0; i < count(); i++) {
    printf("%s\n", item_at(i));
  }
}
