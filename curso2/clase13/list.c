#include "list.h"
#include <stdlib.h>

struct node {
  char *name;
  struct node *next;
  struct node *prev;
};
typedef struct node node_t;

node_t *list = NULL;
int counter = 0;

void prepend(char *name) { insert_at(name, 0); }

void append(char *name) { insert_at(name, counter); }

void insert_at(char *name, int position) {
  node_t *new = (node_t *)malloc(sizeof(node_t));
  new->name = name;
  new->prev = NULL;
  new->next = NULL;
  if (NULL = list) {
    list = new;
    counter++;
  } else {
    node_t *node = list;
    for (int i = 0; i < position; i++) {
      node = node->next;
    }
    new->prev = node;
    new->next = node->next;
    new->prev->next = new;
    new->next->prev = new;
  }
}

int count() { return counter; }
