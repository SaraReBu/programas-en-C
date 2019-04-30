struct node {
  void *content;
  struct node *next;
  struct node *prev;
};
typedef struct node *list_t;

list_t append(list_t list, void *content);

list_t prepend(list_t list, void *content);

list_t insert_at(list_t list, void *content, int position);

list_t remove_at(list_t list, int position);

void *item_at(list_t list, int position);

int count(list_t list);
