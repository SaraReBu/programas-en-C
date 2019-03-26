#include "list.h"
#include <stdio.h>

int main() {
  list_t list;
  list = append(list, "Adrian");
  list = append(list, "Silvia");
  list = prepend(list, "Ian");
  list = insert_at(list, "Jose", 1);
  list = append(list, "Laura");
  list = insert_at(list, "Beatriz", 3);
  list = remove_at(list, 4);
  list = remove_at(list, 0);
  for (int i = 0; i < count(list); i++) {
    printf("%s\n", item_at(list, i));
  }
}
