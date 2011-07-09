// Write a program that calculates how many digits a number
// contains.

#import <stdio.h>

int main(void)
{
  int n, digits;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n <= 9999 && n > 999) {
    digits = 4;
  } else if (n <= 999 && n > 99) {
    digits = 3;
  } else if (n <= 99 && n > 9) {
    digits = 2;
  } else {
    digits = 1;
  }

  printf("The number %d has %d digits.\n", n, digits);
  
  return 0;
}
