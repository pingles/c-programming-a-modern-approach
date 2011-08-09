/* Write a function named duplicate that uses dynamic storage allocation to
   create a copy of a string. Have duplicate return a null pointer if the
   memory allocation fails. */

#include <stdlib.h>
#include <stdio.h>

char*
duplicate(const char* str)
{
  int i;
  int length = 0;

  while (str[length++] != '\0');

  char *newstr = malloc(length + 1);

  if (newstr == NULL) {
    return NULL;
  }
  
  for (i = 0; i < length; i++) {
    newstr[i] = str[i];
  }
  newstr[i] = '\0';

  return newstr;
}

int
main(void)
{
  char input[500];
  int n;
  char c;
  
  printf("Please enter a string: ");
  while ((c = getchar()) != '\n') {
    input[n] = c;
    n++;
  }

  char *dup = duplicate(input);

  printf("Your string: %s\n", dup);
  
  return EXIT_SUCCESS;
}
