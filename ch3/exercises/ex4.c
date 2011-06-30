#import <stdio.h>

int main(void)
{
  int i, j;
  float x;
  
  scanf("%d%f%d", &i, &x, &j);
  printf("i: %d, x: %f, j: %d\n", i, x, j);
  
  return 0;
}

// expected output:
// %d -> captures the 10
// period left on buffer => .3 5 6
// %f -> captures the .3 as 0.3
// buffer => 5 6
// %d -> captures the 5
// i: 10
// x: 0.3
// j: 5

// $ ./ex4 
// 10.3 5 6
// i: 10, x: 0.300000, j: 5
