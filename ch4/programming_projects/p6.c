// European countries use a 13-digit code, known as European
// Article Number (EAN) instead of the 12-digit Universal
// Product Code (UPC) found it North America. Each EAN ends
// with a check digit, just as UPC does.
//

#import <stdio.h>

int main(void)
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, check_digit;
  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

  int sum1 = n2 + n4 + n6 + n8 + n10 + n12;
  int sum2 = n1 + n3 + n5 + n7 + n9 + n11;

  int remainder = (((3 * sum1) + sum2) - 1) % 10;
  check_digit = 9 - remainder;
  
  printf("Check digit: %d\n", check_digit);

  return 0;
}
