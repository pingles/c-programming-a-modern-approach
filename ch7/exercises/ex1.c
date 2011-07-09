#import <stdio.h>

int main(void)
{
  printf("%d\n", 77);
  printf("%d\n", 0x77);
  printf("%d\n", 0XABC);

  return 0;
}

// Decimal value of the following
// 077
// 0x77
// 0XABC
//
// 77
// 7 + (7 * 16^1) = 7 + 112 = 119
// 12 + (11 * 16) + (10 * 16^2) = 12 + 176 + 2560 = 2748

