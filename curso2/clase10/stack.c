#include <stdio.h>
#include <stdlib.h>

struct node {
  char value;
  struct node *prev;
};

struct node *top = NULL;

void push(char c);
char pop();
int is_empty();

int main() {
  push('a');
  push('l');
  push('o');
  push('h');
  while (!is_empty()) {
    printf("%c", pop());
  }
}

void push(char c) {
  struct node *pnode = (struct node *)malloc(sizeof(struct node));
  pnode->prev = top;
  pnode->value = c;
  top = pnode;
}

char pop() {
  struct node *temp = top;
  char c = temp->value;
  top = top->prev;
  free(temp);
  return c;
}

int is_empty() { return NULL == top; }
