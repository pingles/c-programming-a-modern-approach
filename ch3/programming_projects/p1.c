#import <stdio.h>

int main(void)
{
  int m, d, y;
  
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);
  
  printf("You entered the date %d%.2d%d\n", y, m, d);
  
  return 0;
}

// $ ./p1 
// Enter a date (mm/dd/yyyy): 2/17/2011
// You entered the date 20110217
