#include <stdio.h>
#include <stdlib.h>

void
selection_sort(int n[], int size)
{
  if (size == 0) {
    return;
  }
  
  int i = 0;
  int max = 0;
  int idx_of_max = 0;
    
  for (i = 0; i < size; i++) {
    if (n[i] > max) {
      idx_of_max = i;
      max = n[i];
    }
  }

  // swap the max item with the last item in the array
  n[idx_of_max] = n[size-1];;
  n[size-1] = max;

  selection_sort(n, size - 1);
}

int
main(void)
{
  int count = 0;
  int i;
  int n[100];
  
  printf("Enter a series of integers (end with 0): ");

  do {
    scanf("%d", &i);
    n[count] = i;
    count++;
  } while (i > 0);

  selection_sort(n, count);

  for (i = 0; i < count; i++) {
    printf("%d ", n[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
