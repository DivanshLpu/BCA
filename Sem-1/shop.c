#include <stdio.h>
#include <string.h>

int main()
{
    char item[50] = "\0";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;
    // char currency = '₹';

    printf("Enter the item name: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("Enter the price of the item: ");
    scanf("%f", &price);

    printf("Enter the quantity of the item: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have Purchased %d %s(s) at the price %.2f each\n", quantity, item, price);
    printf("THE TOTAL IS : Rs.%.2f\n", total);
}