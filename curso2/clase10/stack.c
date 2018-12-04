#include <stdio.h>
#include <stdlib.h>

struct node {
  char value;
  struct node *prev;
};

struct node *top;

struct node *push(char c);
char pop();
int is_empty();

int main() {
  push('a');
  push('l');
  push('o');
  push('h');
  while (is_empty() != 0) {
    printf("%c", pop());
  }
}

struct node *push(char c) {
  struct node *pnode = (struct node *)malloc(sizeof(struct node));
  pnode->prev = top;
  pnode->value = c;
  top = pnode;
}
