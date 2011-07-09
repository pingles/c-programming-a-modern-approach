#import <stdio.h>

// Write a program that reads an integer entered by the user
// and displays it in octal (base 8)

int main(void)
{
  int n;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);

  int octal_1, octal_2, octal_3, octal_4, octal_5;

  octal_1 = ((((n / 8) / 8) / 8) / 8) % 8;
  octal_2 = (((n / 8) / 8) / 8) % 8;
  octal_3 = ((n / 8) / 8) % 8;
  octal_4 = (n / 8) % 8;
  octal_5 = n % 8;
  
  printf("In octal, your number is: %d%d%d%d%d\n", octal_1, octal_2, octal_3, octal_4, octal_5);
  return 0;
}
