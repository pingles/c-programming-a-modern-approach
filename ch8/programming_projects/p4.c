#include <stdio.h>

int main(void)
{
  int a[10];
  int number_of_items = sizeof(a) / sizeof(a[0]);;
  int i;

  printf("Enter %d numbers: ", number_of_items);
  for (i = 0; i < number_of_items; i++) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  for (i = number_of_items - 1; i >= 0; i--) {
    printf("%d ", a[i]);
  }
  printf("\n");
  
  return 0;
}
