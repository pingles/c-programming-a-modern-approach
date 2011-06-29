#import <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
  int height, length, width, volume, weight;
  
  printf("Enter height of box: ");
  scanf("%d", &height);

  printf("Enter length of box: ");
  scanf("%d", &length);
  
  printf("Enter width of box: ");
  scanf("%d", &width);
  
  volume = height * length * width;
  weight = (volume + 165) / INCHES_PER_POUND;
  
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);
}