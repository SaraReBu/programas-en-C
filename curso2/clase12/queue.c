#include "queue.h"
#include <stdlib.h>

struct node {
  char *name;
  struct node *next;
};
typedef struct node node_t;

static node_t *front, *rear = NULL;

void enqueue(char *name) {
  node_t *new = malloc(sizeof(node_t));
  new->name = name;
  new->next = NULL;
  if (!is_empty()) {
    rear->next = new;
    rear = new;
  } else {
    rear = new;
    front = new;
  }
}

char *dequeue() {
  if (is_empty()) {
    return NULL;
  }
  node_t *oldfront = front;
  char *name = front->name;
  front = front->next;
  free(oldfront);
  return name;
}

int is_empty() { return NULL == front; }
