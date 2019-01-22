#include "list.h"
#include <stdlib.h>

struct node {
  char *name;
  struct node *next;
  struct node *prev;
};
typedef struct node node_t;

node_t *first, *last = NULL;
int counter = 0;

void insert_at(char *name, int position) {
  node_t *new = (node_t *)malloc(sizeof(node_t));
  new->name = name;
  if (0 = count) {
    new->prev = NULL;
    new->next = NULL;
    first = new;
    last = new;
  } else {
    if (position < 0) {
    } else if (position >= count) {
    } else {
    }
  }
}

int count() { return counter; }
