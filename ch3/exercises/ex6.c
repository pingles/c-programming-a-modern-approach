// A modified addfrac.c that allows spaces around numbers during entry

#import <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  
  printf("Enter first fraction: ");
  scanf("%d /%d", &num1, &denom1);
  
  printf("Enter second fraction: ");
  scanf("%d /%d", &num2, &denom2);
  
  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  
  printf("The sum is: %d/%d\n", result_num, result_denom);
  
  return 0;
}

// $ ./ex6 
// Enter first fraction: 5 / 4
// Enter second fraction: 5 / 6
// The sum is: 50/24