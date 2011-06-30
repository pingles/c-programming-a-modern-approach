#import <stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
  
  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
  
  printf("%d %d %d %d\n", a, b, c, d);
  printf("%d %d %d %d\n", e, f, g, h);
  printf("%d %d %d %d\n", i, j, k, l);
  printf("%d %d %d %d\n", m, n, o, p);
  
  int row1, row2, row3, row4;
  row1 = a + b + c + d;
  row2 = e + f + g + h;
  row3 = i + j + k + l;
  row4 = m + n + o + p;  
  printf("Row sums: %d %d %d %d \n", row1, row2, row3, row4);
  
  int col1, col2, col3, col4;
  col1 = a + e + i + m;
  col2 = b + f + j + n;
  col3 = c + g + k + o;
  col4 = d + h + l + p;
  printf("Column sums: %d %d %d %d \n", col1, col2, col3, col4);
  
  printf("Diagonal sums: %d %d \n", (a + f + k + p), (m + j + g + d));
  
  return 0;
}

// $ ./p5 
// Enter the numbers from 1 to 16 in any order: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
// 16 3 2 13
// 5 10 11 8
// 9 6 7 12
// 4 15 14 1
// Row sums: 34 34 34 34 
// Column sums: 34 34 34 34 
// Diagonal sums: 34 34
