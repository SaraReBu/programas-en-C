#include "sort.h"
#include <stdio.h>

int main() {
  list_t list = NULL;
  list_t sorted = NULL;
  list = append(list, "a");
  list = append(list, "b");
  list = append(list, "c");
  printf("Unsorted \n");
  for (int i = 0; i < count(list); i++) {
    printf("%s\n", item_at(list, i));
  }
  sorted = sort(list);
  printf("Sorted \n");
  for (int i = 0; i < count(sorted); i++) {
    printf("%s \n", item_at(sorted, i));
  }
}
