#include "queue.h"

struct node {
  char *name;
  struct node *next;
};
typedef struct node node_t;

node_t *front, *rear;

void enqueue(char *name) {}

char *dequeue() {
  node_t *oldfront = front;
  char *name = front->name;
  front = front->next;
  free(oldfront);
  return name;
}
