#import <stdio.h>

int main(void)
{
  int i;

  for (i = 10; i >= 1; i /= 2)
    printf("%d", i++);
  
  return 0;
}


// Output:
// 10
// increments i to 11
// divides 11 by 2 to 5
// 5
// increments i to 6
// divides 6 by 2 to 3
// 3
// increments i to 4
// divides 4 by 2 to 2
// 2
// increments i to 3
// divides 3 by 2 to 1
// 1
// increments i to 2
// divides 2 by 2 to 1
// 1
// 
// loops forever
