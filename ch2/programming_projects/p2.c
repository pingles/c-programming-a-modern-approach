/* Write a program that computes the volume of a sphere
 * with a 10-meter radius using the formula
 * v = 4/3 * pi * r^3
 * Write the fraction 4/3 and 4.0f/3.0f. Try writing it as
 * 4/3, what happens?
 */

#import <stdio.h>
#define FACTOR 4.0f/3.0f
#define PI 3.1415926535f

int main(void)
{
  float radius = 10.0f;
  printf("Volume of sphere: %f\n", FACTOR * PI * (radius * radius * radius));
  
  return 0;
}

// When you change the value to 4/3 rather than 4.0f/3.0f 
// it rounds: Volume of sphere: 3141.592773
