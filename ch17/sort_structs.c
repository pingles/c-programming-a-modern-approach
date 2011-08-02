#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int price;
  char *name;
} widget_t;

void
print_contents(widget_t *a, int num_items)
{
  int i;

  for (i = 0; i < num_items; i++)
  {
    printf("%s ", a[i].name);
  }
}

int
compare_price(const void *a, const void *b)
{
  widget_t *a_widget = (widget_t*)a;
  widget_t *b_widget = (widget_t*)b;

  if (a_widget->price < b_widget->price) {
    return -1;
  }

  if (a_widget->price > b_widget->price) {
    return 1;
  }

  return 0;
}

int
main(void)
{
  widget_t a = {6, "Doohicky"};
  widget_t b = {10, "Whatsit"};
  widget_t c = {9, "Thingymajig"};

  widget_t arr[] = {a, b, c};
  int num_items = (sizeof(arr) / sizeof(widget_t));

  printf("Current order: ");
  print_contents(arr, num_items);
  printf("\n");
  
  printf("Sorted by price: ");
  qsort(arr, num_items, sizeof(widget_t), compare_price);
  print_contents(arr, num_items);
  printf("\n");
  
  return EXIT_SUCCESS;
}
