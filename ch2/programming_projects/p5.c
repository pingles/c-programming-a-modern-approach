#import <stdio.h>

int main(void)
{
  printf("Enter value for x: ");
  float x;
  scanf("%f", &x);
  
  float val = (3 * (x * x * x * x * x)) + 
              (2 * (x * x * x * x)) +
              (5 * (x * x * x)) +
              (x * x) +
              (7 * x) -
              6;
              
  printf("Value was: %f\n", val);
              
  return 0;
}

/*
Enter value for x: 9
Value was: 194052.000000
*/