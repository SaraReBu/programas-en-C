#include "..\list\list.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

list_t apply(list_t, void *(*)(const void *));

void *capitalize_naive(const void *);

void *capitalize(const void *);

void printflist(char *msg, list_t list) {
  printf("%s\n", msg);
  for (int i = 0; i < count(list); i++) {
    printf("%s\n", item_at(list, i));
  }
}

int main(int argc, char const *argv[]) {
  list_t list = NULL;
  list = append(list, "A");
  list = append(list, "b");
  list = append(list, "c");
  printflist("Original", list);
  list_t capitalized = NULL;
  capitalized = apply(list, capitalize_naive);
  printflist("capitalized", capitalized);

  capitalized = apply(list, capitalize);
  printflist("capitalized :)", capitalized);
}

void *capitalize_naive(const void *src) {
  size_t len = strlen(src);
  char *dst = malloc(len + 1);
  strcpy(dst, src);
  for (int i = 0; i < len; i++) {
    dst[i] = dst[i] - 32;
  }
  return dst;
}

void *capitalize(const void *src) {
  size_t len = strlen(src);
  char *dst = malloc(len + 1);
  strcpy(dst, src);
  for (int i = 0; i < len; i++) {
    dst[i] = toupper(dst[i]);
  }
  return dst;
}
