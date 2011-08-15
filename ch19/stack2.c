/* Linked-list implementation of a Stack */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define PRIVATE static

struct node {
  int data;
  struct node *next;
};

PRIVATE struct node *top = NULL;

PRIVATE void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  while (!is_empty()) {
    pop();
  }
}

bool is_empty(void)
{
  return top == NULL;
}

bool is_full(void)
{
  return false;
}

void push(int i)
{
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    terminate("Error in push: stack is full");
  }

  new_node->data = i;
  new_node->next = top;
  top = new_node;
}

int pop(void)
{
  struct node *old_top;
  int i;

  if (is_empty()) {
    terminate("Error in pop: stack is empty");
  }
  
  i = top->data;

  old_top = top;
  top = top->next;
  free(old_top);

  return i;
}
