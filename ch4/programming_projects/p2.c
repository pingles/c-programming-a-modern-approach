#import <stdio.h>

// Write a program that asks the user to enter a three-digit
// number, then prints the number with its digits reversed.

int main(void)
{
  int n;
  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  int c = n % 10;
  int b = (n / 10) % 10;
  int a = (n / 100);

  printf("The reversal is: %d%d%d\n", c, b, a);
  
  return 0;
}
