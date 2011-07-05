#import <stdio.h>

int main(void)
{
  printf("%d\n", 8 % 5);
  printf("%d\n", -8 % 5);
  printf("%d\n", 8 % -5);
  printf("%d\n", -8 % -5);
  return 0;
}

// What's the value of the following expressions in C99
// a) 8 % 5
// b) -8 % 5
// c) 8 % -5
// d) -8 % -5

// a: 8 / 5 = 1.6
//    8 / 5 = 1 6/10
//    8 / 5 = 1 3/5
//    8 mod 5 = 3
//
// b: -3
// c: 3
// d: -3

