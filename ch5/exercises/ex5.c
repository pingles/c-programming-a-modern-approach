#import <stdio.h>

int main(void)
{
  int n;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  if (n >= 1 <= 1)
    printf("n is between 1 and 10\n");
  
  return 0;
}

// Is the above statement legal? If so, what does
// it do when n is equal to 0

// It is legal.

// ((n >= 1) <= 1)
// ((0 >= 1) <= 1)
// (0 <= 1)
// 1
// It will print out the message
