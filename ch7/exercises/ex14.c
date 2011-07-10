#import <stdio.h>

int main(void)
{
  float f;
  
  printf("Enter f: ");
  scanf("%f", &f);

  float frac_part = f - (int) f;

  printf("f: %f\n", f);
  printf("Fractional part: %f\n", frac_part);
  
  return 0;
}
