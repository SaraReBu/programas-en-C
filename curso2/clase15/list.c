#include "list.h"
#include <stdlib.h>

list_t prepend(list_t list, void *content) {
  return insert_at(list, content, 0);
}

list_t append(list_t list, void *content) {
  return insert_at(list, content, count(list));
}

list_t insert_at(list_t list, void *content, int position) {
  list_t new = (list_t)malloc(sizeof(struct node));
  new->content = content;
  new->prev = NULL;
  new->next = NULL;
  if (NULL == list) {
    list = new;
  } else if (position <= 0) {
    new->next = list;
    new->next->prev = new;
    list = new;
  } else {
    list_t node = list;
    for (int i = 0; i < position - 1 && node->next != NULL; i++) {
      node = node->next;
    }
    new->prev = node;
    new->next = node->next;
    new->prev->next = new;
    if (new->next != NULL) {
      new->next->prev = new;
    }
  }
  return list;
}

list_t remove_at(list_t list, int position) {
  if (NULL == list) {
    return NULL;
  } else if (position <= 0) {
    list_t temp = list;
    if (temp->next != NULL) {
      temp->next->prev = NULL;
    }
    list = temp->next;
    free(temp);
  } else {
    list_t node = list;
    for (int i = 0; i < position && node->next != NULL; i++) {
      node = node->next;
    }
    if (node->prev != NULL) {
      node->prev->next = node->next;
    }
    if (node->next != NULL) {
      node->next->prev = node->prev;
    }
    free(node);
  }
  return list;
}

void *item_at(list_t list, int position) {
  for (int i = 0; i < position && list != NULL; i++) {
    list = list->next;
  }
  return NULL != list ? list->content : NULL;
}

int count(list_t list) {
  int i;
  for (i = 0; list != NULL; i++) {
    list = list->next;
  }
  return i;
}
