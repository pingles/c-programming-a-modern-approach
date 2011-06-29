#import <stdio.h>
#define TAX_FACTOR 1.05f

int main(void)
{
  printf("Enter an amount: ");
  float amount;
  scanf("%f", &amount);
  
  printf("With tax added: £%.2f\n", (amount * TAX_FACTOR));
  
  return 0;
}