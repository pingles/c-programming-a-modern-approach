#include <stdio.h>

int main(void)
{
  int n, i, sum;
  int vals[5][5];

  for (n = 0; n < 5; n++) {
    printf("Enter row %d: ", n + 1);
    for (i = 0; i < 5; i++) {
      scanf("%1d", &vals[n][i]);
    }
  }

  printf("Row totals: ");
  for (n = 0; n < 5; n++) {
    sum = 0;

    for (i = 0; i < 5; i++) {
      sum += vals[n][i];
    }
    
    printf("%2d ", sum);
  }
  printf("\n");

  printf("Column totals: ");
  for (i = 0; i < 5; i++) {
    sum = 0;
    
    for (n = 0; n < 5; n++) {
      sum += vals[n][i];
    }

    printf("%2d ", sum);
  }
  printf("\n");

  return 0;
}
