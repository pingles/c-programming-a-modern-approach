#import <stdio.h>

int main(void)
{
  printf("Enter value for x: ");
  float x;
  scanf("%f", &x);
  
  float value = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
  
  printf("Value is: %f\n", value);
  
  return 0;
}