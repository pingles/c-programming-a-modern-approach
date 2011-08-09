/* Quick example to show use of pointers-to-pointers */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int data;
  void *next;
} node_t;

void
add_to_list(node_t **list, int n)
{
  node_t *new_node = malloc(sizeof(node_t));
  new_node->data = n;
  new_node->next = *list;

  *list = new_node;
}

node_t*
create_node(int n)
{
  node_t *node = malloc(sizeof(node_t));
  node->data = n;
  return node;
}


int
main(void)
{
  node_t *n;
  node_t *first;
  
  first = create_node(0);
  add_to_list(&first, 1);
  add_to_list(&first, 2);

  printf("Going to iterate...\n");
  for (n = first; n->next != NULL; n = n->next) {
    printf("%d\n", n->data);
  }
  
  return EXIT_SUCCESS;
}
