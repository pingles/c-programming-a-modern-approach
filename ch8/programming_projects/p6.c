// Biff!!

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  int i;
  char msg[1024];
  char c;

  printf("Enter message: ");
  c = getchar();
  do {
    c = toupper(c);
    switch (c) {
    case 'A': c = '4'; break;
    case 'B': c = '8'; break;
    case 'E': c = '3'; break;
    case 'I': c = '1'; break;
    case 'O': c = '0'; break;
    case 'S': c = '5'; break;
    default: c = c;
    }
    msg[i] = c;
    
    i++;
    c = getchar();
  } while (c != '\n');

  strcat(msg, "!!!!!");

  printf("Message: %s\n", msg);
  printf("Length : %zu\n", strlen(msg));

  return 0;
}
