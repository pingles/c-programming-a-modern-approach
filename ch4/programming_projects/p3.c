#import <stdio.h>

// Rewrite the program in Programming Project 2 so that it prints the
// reversal of a three-digit number without using arithmetic

int main(void)
{
  int a, b, c;
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &a, &b, &c);

  printf("The reversal is: %d%d%d\n", c, b, a);

  return 0;
}
