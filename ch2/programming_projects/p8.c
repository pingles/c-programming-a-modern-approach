#import <stdio.h>

int main(void)
{
  float amount, interest_rate, monthly_payment;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);  
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  
  float interest_factor = ((interest_rate / 100) / 12) + 1;
  amount = (amount - monthly_payment) * interest_factor;
  printf("Balance remaining after first payment: %.2f\n", amount);

  amount = (amount - monthly_payment) * interest_factor;
  printf("Balance remaining after second payment: %.2f\n", amount);
  
  amount = (amount - monthly_payment) * interest_factor;
  printf("Balance remaining after third payment: %.2f\n", amount);
  
  return 0;
}