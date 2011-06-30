#import <stdio.h>

int main(void)
{
  float x = 109.2918;
  
  printf("a: %-8.1e\n", x);
  printf("b: %10.6e\n", x); // this formats longer than 10?
  printf("c: %-8.3f\n", x);
  printf("d: %6.0f\n", x);
  
  return 0;
}

// a: 1.1e+02 
// b: 1.092918e+02
// c: 109.292 
// d:    109
