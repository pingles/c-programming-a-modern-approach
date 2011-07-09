#import <stdio.h>

int main(void)
{
  int i = 1;

  switch (i % 3) {
  case 0: printf("zero");
  case 1: printf("one");
  case 2: printf("two");
  }
  
  return 0;
}

// What output does the above program produce?
// i % 3 = 1
// onetwo

