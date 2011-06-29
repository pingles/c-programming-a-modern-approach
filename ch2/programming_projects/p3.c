/* Modify p2 to ask user for radius
 */

#import <stdio.h>
#define FACTOR 4.0f/3.0f
#define PI 3.1415926535f

int main(void)
{
  float radius;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Volume of sphere: %f\n", FACTOR * PI * (radius * radius * radius));
  
  return 0;
}
