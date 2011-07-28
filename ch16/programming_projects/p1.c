#include <stdlib.h>
#include <stdio.h>

typedef struct {
  int code;
  char* name;
} country_t;

int
main(void)
{
  int i, code;

  country_t countries[] = {
    {44, "United Kingdom"},
    {1,  "United States"},
    {33, "France"}
  };
  
  printf("Please enter an international dialling code (e.g. 44): ");
  scanf("%d", &code);

  country_t *found_country = NULL;
  
  for (i = 0; i < (sizeof(countries)/sizeof(country_t)); i++) {
    if (countries[i].code == code) {
      found_country = &countries[i];
      break;
    }
  }

  if (found_country != NULL) {
    printf("Country: %s\n", found_country->name);
  } else {
    printf("Did not recognise code.\n");
  }
  
  return EXIT_SUCCESS;
}
