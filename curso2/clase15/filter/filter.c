#include "filter.h"
#include <stdio.h>

list_t filter(list_t list, int (*predicate)(void *item)) {
  list_t filtered = NULL;
  for (int i = 0; i < count(list); i++) {
    void *p = item_at(list, i);
    if (predicate(p)) {
      filtered = append(filtered, p);
    }
  }
  return filtered;
}
