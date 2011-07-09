// Suppose that i and j are variables of type int. What is the type
// of the expression i / j + 'a'?
//
// Answer: int. character is promoted to an int.

#import <stdio.h>

int main(void)
{
  int i = 10;
  int j = 5;
  
  printf("%d", i / j + 'a');
  
  return 0;
}
