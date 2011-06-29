#import <stdio.h>

int main(void)
{
  printf("Enter a dollar amount: ");
  int amount;
  scanf("%d", &amount);
  
  int num_of_20 = amount / 20;
  amount = (amount - (num_of_20 * 20));
  int num_of_10 = amount / 10;
  amount = (amount - (num_of_10 * 10));
  int num_of_5 = amount / 5;
  amount = (amount - (num_of_5 * 5));
  int num_of_1 = amount / 1;
  amount = amount - num_of_1;
  
  printf("$20 bills: %d\n", num_of_20);
  printf("$10 bills: %d\n", num_of_10);
  printf(" $5 bills: %d\n", num_of_5);
  printf(" $1 bills: %d\n", num_of_1);
  
  return 0;
}