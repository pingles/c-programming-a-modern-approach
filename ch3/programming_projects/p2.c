#import <stdio.h>

int main(void)
{
  int item_number, d, m, y;
  float price;
  
  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);

  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d\t\t$%6.2f\t\t%d/%d/%d\n", item_number, price, m, d, y);

  return 0;
}
