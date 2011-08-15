/* Demonstrates abstraction: different implementations of
   stack.

   To compile:
   gcc -c stack1.c
   gcc stack_app.c -o stack_app stack1.o
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
  make_empty();

  push(5);
  push(10);
  push(15);

  printf("Popping 1st: %d\n", pop());
  printf("Popping 2nd: %d\n", pop());
  printf("Popping 3rd: %d\n", pop());
  
  return EXIT_SUCCESS;
}
