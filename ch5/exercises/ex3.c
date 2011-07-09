// The following program fragments illustrate the short-circuit
// behaviour of logical expressions. Show the output produced
// by each, assuming that i, j, and k are int variables

#import <stdio.h>

int main(void)
{
  int i, j, k;
  
  i = 3; j = 4; k = 5;
  printf("a: %d\n", i < j || ++j < k);
  printf("a: %d %d %d\n", i, j, k);

  i = 7; j = 8; k = 9;
  printf("b: %d\n", i - 7 && j++ < k);
  printf("b: %d %d %d\n", i, j, k);

  i = 7; j = 8; k = 9;
  printf("c: %d\n", (i = j) || (j = k));
  printf("c: %d %d %d\n", i, j, k);

  i = 1; j = 1; k = 1;
  printf("d: %d\n", ++i || ++j && ++k);
  printf("d: %d %d %d\n", i, j, k);
  
  return 0;
}

// a) i = 3; j = 4; k = 5;
//    i < j || ++j < k
//    3 < 4
//    1
//    i j k
//    3 4 5
// b) i = 7; j = 8; k = 9;
//    i - 7 && j++ < k
//    0 && 9 < 9
//    0 && 0
//    0
//    7 8 9
// c) i = 7; j = 8; k = 9;
//    (i = j) || (j = k)
//    8
//    1
//    8 8 9
// d) i = 1; j = 1; k = 1;
//    ++i || ++j && ++k
//    1
//    2 1 1

