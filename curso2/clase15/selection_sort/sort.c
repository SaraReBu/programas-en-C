#include "sort.h"
#include <string.h>

int biggest(list_t list, int (*compare)(const void *a, const void *b));

list_t sort(list_t list, int (*compare)(const void *a, const void *b)) {
  list_t sorted = NULL;
  // 1º recorrer tantas veces como numero de elmentos
  int c = count(list);
  for (int i = 0; i < c; i++) {
    // 2º encontrar el mas grande
    int position = biggest(list, compare);
    // 3º append en sorted(lista ordenada)
    void *p = item_at(list, position);
    sorted = append(sorted, p);
    // 4º quitar posicion sobrante
    list = remove_at(list, position);
  }
  return sorted;
}

int biggest(list_t list, int (*compare)(const void *a, const void *b)) {
  // biggest guarda el mas grande
  void *biggest = item_at(list, 0);
  // biggest_position guarda su posicion
  int biggest_position = 0;
  // recorremos la lista
  for (int i = 0; i < count(list); i++) {
    // obtener el elemento de i
    void *current = item_at(list, i);
    // comparar
    if (compare(current, biggest) > 0) {
      biggest = current;
      biggest_position = i;
    }
  }
  return biggest_position;
}
