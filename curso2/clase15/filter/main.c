#include "filter.h"
#include <ctype.h>
#include <stdio.h>

char initial;

int begings_with(void *string) {
  return (toupper(((char *)string)[0]) == toupper(initial));
}

void printflist(char *msg, list_t list) {
  printf("%s\n", msg);
  for (int i = 0; i < count(list); i++) {
    printf("%s\n", item_at(list, i));
  }
}

int main(int argc, char const *argv[]) {
  list_t src = NULL;
  initial = argv[1][0];
  for (int i = 2; i < argc; i++) {
    void *item = (void *)argv[i];
    src = append(src, item);
  }
  list_t filtered = filter(src, begings_with);

  char msg[80];
  sprintf(msg, "filtered by %c", initial);
  printflist(msg, filtered);
  return 0;
}
