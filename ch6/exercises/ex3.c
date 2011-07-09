#import <stdio.h>

int main(void)
{
  int i, j;

  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d", i);

  return 0;
}


// Output:
// i is 5
// j is 4
// while j is greater than 0
// prints 5

// i is decremented (to 4)
// j is 3
// loop

// prints 4
// i is decremented (to 3)
// j is 2

// prints 3
// i is decremented (to 2)
// j is 1

// prints 2
// i is decremented (to 1)
// j is 0
// halts

// 5432
