#import <stdio.h>

int main(void)
{
  float x, y;
  
  scanf("%f, %f", &x, &y);
  printf("%f,%f\n", x, y);
}

// a) same
// b) same
// c) scanf doesn't terminate. have to enter \n to capture
// $ ./ex3 
// 90.89 
// \n
// 90.889999
// d) same
