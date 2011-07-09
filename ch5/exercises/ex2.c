// The following program fragements illustrate the logical operators.
// Show the output produced by each assuming i, j, and k are int variables.

#import <stdio.h>

int main(void)
{
  int i, j, k;

  i = 10; j = 5;
  printf("a: %d\n", !i < j);

  i = 2; j = 1;
  printf("b: %d\n", !!i + !j);

  i = 5; j = 0; k = -5;
  printf("c: %d\n", i && j || k);

  i = 1; j = 2; k = 3;
  printf("d: %d\n", i < j || k);
  
  return 0;
}

// a) i = 10; j = 5;
//    !i < j;
//    !(10 < 5)
//    !0
//    1
// b) i = 2; j = 1;
//    !!i + !j
//    1 + 0
//    1
// c) i = 5; j = 0; k = -5;
//    i && j || k
//    i && (j || k)
//    i && (0 || -5)
//    5 && 1
//    1
// d) i = 1; j = 2; k = 3;
//    i < j || k
//    (i < j) || k
//    1 < 2 || 3
//    1
