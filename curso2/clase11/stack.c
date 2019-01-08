#include "stack.h"
#include <stdlib.h>

struct node {
  char value;
  struct node *prev;
};

static struct node *top = NULL;

static int count = 0;

void push(char c) {
  struct node *pnode = (struct node *)malloc(sizeof(struct node));
  pnode->prev = top;
  pnode->value = c;
  top = pnode;
  count++;
}

char pop() {
  struct node *temp = top;
  char c = temp->value;
  top = top->prev;
  free(temp);
  count--;
  return c;
}

int is_empty() { return 0 == count; }
