// Which one of the following is not a legal way to write the number 65?
// a) 'A'
// b) 0b1000001
// c) 0101
// d) 0x41
//
// Answer: b.

#import <stdio.h>

int main(void)
{
  printf("%d\n", 'A');
  printf("%d\n", 0101);
  printf("%d\n", 0x41);
  
  return 0;
}
