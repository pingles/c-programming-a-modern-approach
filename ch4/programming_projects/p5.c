// Rewrite upc.c so that user enters 11 digits at one time
// instead of entering one digit, then five digits, and another
// five digits

#import <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, sum1, sum2, total;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

  sum1 = d + i2 + i4 + j1 + j3 + j5;
  sum2 = i1 + i3 + i5 + j2 + j4;
  total = 3 * sum1 + sum2;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
