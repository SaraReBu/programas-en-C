#include "sort.h"
#include <stdio.h>

int main() {
  list_t list;
  list_t sorted;
  list = append(list, "a");
  list = append(list, "b");
  list = append(list, "c");
  for (int i = 0; i < count(list); i++) {
    printf("%s", item_at(list, i));
  }
  sorted = sort(list);
  for (int i = 0; i < count(sorted); i++) {
    printf("%s", item_at(sorted, i));
  }
}
