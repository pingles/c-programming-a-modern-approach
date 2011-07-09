#import <stdio.h>

int main(void)
{
  int i, j, k;
  i = 2; j = 3;
  k = i * j == 6;
  printf("a: %d\n", k);

  i = 5; j = 10; k = 1;
  printf("b: %d\n", k > i < j);

  i = 3; j = 2; k = 1;
  printf("c: %d\n", i < j == j < k);

  i = 3; j = 4; k = 5;
  printf("d: %d\n", i % j + i < k);
  
  return 0;
}

// Show the output produced by each, assuming that i, j and k
// are int variables
//
// a) i = 2; j = 3;
//    k = i * j == 6;
//    k
//    1
//
// b) i = 5; j = 10; k = 1;
//    printf("%d", k > i < j)
//    ((k > i) < j)
//    0 < 10
//    1
//
// c) i = 3; j = 2; k = 1;
//    printf("%d", i < j == j < k);
//    (3 < 2) == (2 < 1)
//    0 == 0
//    1
//
// d) i = 3; j = 4; k = 5;
//    printf("%d", i % j + i < k);
//    ((3 % 4) + 3) < 5
//    (3 + 3) < 5
//    0

