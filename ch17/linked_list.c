#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int value;
  struct node *next;
} node;

node*
add_to_list(node *list, int n)
{
  node *new_node = malloc(sizeof(node));

  if (new_node == NULL) {
    printf("Error alloc'ing memory");
    exit(EXIT_FAILURE);
  }
  
  new_node->value = n;
  new_node->next = list;

  return new_node;
}

int
main(void)
{
  int i;
  node *first = NULL;
  node *p = NULL;

  printf("Enter a series of numbers (0 to stop): ");
  scanf("%d", &i);
  while (i > 0) {
    first = add_to_list(first, i);
    
    scanf("%d", &i);
  }

  for (p = first; p != NULL; p = p->next) {
    printf("%d ", p->value);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
