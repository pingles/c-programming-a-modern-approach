#import <stdio.h>

int main(void)
{
  float x, y;
  int i;
  
  scanf("%f%d%f", &x, &i, &y);
  printf("x: %f i: %d y: %f\n", x, i, y);
}

// 12.3 45.6 789
// x will capture 12.3
// i will capture 45
// y will capture 0.6
//
// $ ./ex5 
// 12.3 45.6 789
// x: 12.300000 i: 45 y: 0.600000