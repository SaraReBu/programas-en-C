#include "sort.h"

int biggest(list_t list);

list_t sort(list_t list) {
  for (int i = 0; i < count(list); i++) {
    int position = biggest(list);
    void *item_at(list, position);
  }
}
