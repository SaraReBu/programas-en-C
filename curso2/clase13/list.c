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
  if (NULL == list) {
    list = new;
  } else if (position <= 0) {
    new->next = list;
    new->next->prev = new;
    list = new;
  } else {
    node_t *node = list;
    for (int i = 0; i < position - 1; i++) {
      node = node->next;
    }
    new->prev = node;
    new->next = node->next;
    new->prev->next = new;
    if (new->next != NULL) {
      new->next->prev = new;
    }
  }
  counter++;
}

void remove_at(int position) {}

char *item_at(int position) {
  node_t *link = list;
  for (int i = 0; i < position; i++) {
    link = link->next;
  }
  return link->name;
}

int count() { return counter; }
