#import <stdio.h>

int main(void)
{
  int a, b, c;
  
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);
  
  return 0;
}

/*
Output:

$ ./ex4 
a: 32767
b: 1762022760
c: 0

$ ./ex4 
a: 32767
b: 1622611304
c: 0

$ ./ex4 
a: 32767
b: 1743295848
c: 0

*/