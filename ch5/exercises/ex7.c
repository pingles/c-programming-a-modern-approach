#import <stdio.h>

int main(void)
{
  int i;
  
  printf("Enter i: ");
  scanf("%d", &i);

  printf("%d\n", i >= 0 ? i : -i);
  
  return 0;
}

// What does the following statement print if i has the value 17?
// What does it print if i has the value -17?
//
// It will print 17 if i == 0
// It will print 17 if i == -17
