#import <stdio.h>

int main(void)
{
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  int x, y, z;
  scanf("(%d)%d-%d", &x, &y, &z);
  printf("%.3d.%.3d.%.4d\n", x, y, z);
  
  return 0;
}

// $ ./p4 
// Enter phone number [(xxx) xxx-xxxx]: (019)090-9981
// 019.090.9981
