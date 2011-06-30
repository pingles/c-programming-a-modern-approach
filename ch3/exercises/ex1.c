#import <stdio.h>

int main(void)
{
  printf("%6d, %4d\n", 86, 1040);
  printf("%12.5e\n", 30.253);
  printf("%.4f\n", 83.162);
  printf("%-6.2g\n", 0.0000009979);
  
  return 0;
}

// a)
//     86, 1040
// b)
//  3.02530e+01
// c)
// 83.1620
// d)
// 1e-06
