#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char*
concat(const char *s1, const char *s2)
{
  char *result;

  result = malloc(strlen(s1) + strlen(s2) + 1);
  if (result == NULL) {
    printf("Error: mallocing in concat");
    exit(EXIT_FAILURE);
  }
  strcpy(result, s1);
  strcat(result, s2);

  return result;
}

int
main(void)
{
  char* x = "Hello, ";
  char* y = "World!";

  char* concatted = concat(x, y);

  printf("%s\n", concatted);

  return EXIT_SUCCESS;
}
