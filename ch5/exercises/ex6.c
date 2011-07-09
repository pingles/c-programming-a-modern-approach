#import <stdio.h>

int main(void)
{
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  if (n == 1-10)
    printf("n is between 1 and 10\n");
  
  return 0;
}

// Is the above if statement legal? If so,
// what does it do when n is equal to 5.
//
// It is legal
//
// (n == (1 - 10))
// Only prints if n == -9
// Doesn't print anything.

