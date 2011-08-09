#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int len;
  char chars[];
} vstring_t;

vstring_t*
create_vstring(int len, const char* s)
{
  int i;
  
  vstring_t *vstr = malloc(sizeof(vstring_t) + len);

  for (i = 0; s[i] != '\0'; i++) {
    vstr->chars[i] = s[i];
  }
  
  vstr->len = len;

  return vstr;
}

int
main(void)
{
  int n = 0;
  char chars[500];
  char c;

  printf("Please enter a string: ");
  while ((c = getchar()) != '\n') {
    chars[n] = c;
    n++;
  }

  printf("You entered a string %d characters long. Creating vstring... \n", n);

  vstring_t *vstr = create_vstring(n, chars);
  printf("%s (%d chars)\n", vstr->chars, vstr->len);
  
  return EXIT_SUCCESS;
}
