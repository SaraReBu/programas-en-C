#include <stdio.h>
#include <stdlib.h>

struct list {
  char c;
  struct list *next;
};

int main() {
  struct list *cadena;
  cadena = (struct list *)malloc(sizeof(struct list));

  cadena->c = 'h';
  cadena->next = (struct list *)malloc(sizeof(struct list));

  cadena->next->c = 'o';
  cadena->next->next = (struct list *)malloc(sizeof(struct list));

  cadena->next->next->c = 'l';
  cadena->next->next->next = (struct list *)malloc(sizeof(struct list));

  cadena->next->next->next->c = 'a';
  cadena->next->next->next->next = NULL;

  while (NULL != cadena) {
    printf("%c", cadena->c);
    cadena = cadena->next;
  }
}
