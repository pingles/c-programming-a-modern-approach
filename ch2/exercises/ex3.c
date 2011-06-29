#import <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
  int height = 8;
  int length = 12;
  int width = 10;
  
  int volume = height * length * width;
  
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / INCHES_PER_POUND);
  
  return 0;
}