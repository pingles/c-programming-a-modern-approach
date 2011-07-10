// Use typedef to create types named Int8, Int16 and Int32. Define
// types so they represent 8-bit, 16-bit and 32-bit Integers on your
// machine

#import <stdio.h>
#import <stdint.h>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void)
{
  printf("Size of Int8 (bytes) : %zu\n", sizeof(Int8));
  printf("Size of Int16 (bytes): %zu\n", sizeof(Int16));
  printf("Size of Int32 (bytes): %zu\n", sizeof(Int32));
  
  return 0;
}
