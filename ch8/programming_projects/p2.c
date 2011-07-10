#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int digit_count[10] = {0};
  int digit, i;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    
    digit_count[digit] += 1;
    n /= 10;
  }

  printf("Digit:\t\t");
  for (i = 0; i <= 9; i++) {
    printf("%d  ", i);
  }
  printf("\n");

  printf("Occurrences:\t");
  for (i = 0; i <= 9; i++) {
    printf("%d  ", digit_count[i]);    
  }

  printf("\n");

  return 0;
}
