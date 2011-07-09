// Write a program that asks the user for a 24-hour time, then displays
// the time in 12-hour form. Be sure not to show 12:00 as 00:00

#import <stdio.h>

int main(void)
{
  int h, h2, m;
  
  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &h, &m);

  h2 = (h == 12) ? 12 : (h % 12);

  printf("Equivalent 12-hour time: %.2d:%.2d %s\n", h2, m, h > 12 ? "PM" : "AM");
  
  return 0;
}
