// If c is a variable of type char, which one of the following statements is illegal?
// a) i += c (i has type int)
// b) c = 2 * c - 1
// c) putchar(c)
// d) printf(c)

#import <stdio.h>

int main(void)
{
  int i = 0;
  char c = 'a';

  i += c;
  c = 2 * c - 1;

  putchar(c);

  // this isn't valid
  // printf(c);

  printf("%c", c);
  
  return 0;
}
