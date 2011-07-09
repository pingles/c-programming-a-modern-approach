#import <stdio.h>

int main(void)
{
  int age;
  
  printf("Enter age: ");
  scanf("%d", &age);

  if (age >= 13 && age <= 19) {
    printf("Teenager\n");
  } else {
    printf("Not a teenager\n");
  }
  
  return 0;
}

