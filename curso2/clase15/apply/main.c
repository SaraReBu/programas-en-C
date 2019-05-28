#include "..\list\list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

list_t apply(list_t, void *(*)(void *));

void * capitalize(void *);

void printflist(list_t list) {
  for (int i = 0; i < count(list); i++) 
  {
    printf("%s\n", item_at(list, i));
  }
}

int main(int argc, char const *argv[]) {
  list_t list = NULL;
  list = append(list, "a");
  list = append(list, "b");
  list = append(list, "c");
  printflist(list);
  list_t capitalized=NULL;
  capitalized=apply(list,capitalize);
  printflist(capitalize);
}

void * capitalize(void* src){
  void *dst=malloc(strlen(src));
}
