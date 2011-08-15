#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);

/* create will dynamically allocate memory for the stack and
   initialize its contents.
   destroy will release the dynamically allocated memory
*/

void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);

/* a Stack variable is now a pointer; it
   points to a stack_type structure that stores
   the contents of the stack. If a function needs
   to modify the stack it changes the structure itself,
   not the pointer to the structure
*/

#endif

