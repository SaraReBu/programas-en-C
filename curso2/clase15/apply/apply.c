#include "..\list\list.h"
#include <stdio.h>

list_t apply(list_t list, void *(*func)(const void *)) {
  list_t applied = NULL;
  for (int i = 0; i < count(list); i++) {
    applied = append(applied, func(item_at(list, i)));
  }
  return applied;
}
