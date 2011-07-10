// The squre program will fail if i * i exceeds the maximum int value. Run
// the program and determine the smallest value of n that causes failure.
// What can you conclude about the number of bits to store integer types
// on your machine?

#import <stdio.h>

int main(void)
{
  int i;

  printf("Enter i: ");
  scanf("%d", &i);

  printf("i * i: %d\n", i * i);
  printf("sizeof(int): %zu\n", sizeof(int));
  
  return 0;
}

// It fails with 100000. The result should be 10000000000 (which needs 33-bits)
// in binary according to Calculator.app. The program prints:
// Enter i: 100000
// i * i: 1410065408
// int must therefore be a 32-bit integer. This is confirmed with sizeof(int)
// returning 4 bytes.
