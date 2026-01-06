// bill generator



#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    float price;
    int quantity;
} Item;

void printBill(Item items[], int itemCount) {
    float total = 0.0;

    printf("\n----- Bill -----\n");
    printf("%-20s %-10s %-10s %-10s\n", "Item Name", "Price", "Quantity", "Total");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < itemCount; i++) {
        float itemTotal = items[i].price * items[i].quantity;
        printf("%-20s $%-9.2f %-10d $%-9.2f\n", items[i].name, items[i].price, items[i].quantity, itemTotal);
        total += itemTotal;
    }

    printf("-------------------------------------------------\n");
    printf("Total Amount: $%.2f\n", total);
}

int main() {
    Item items[MAX_ITEMS];
    int itemCount = 0;
    char choice;

    do {
        if (itemCount >= MAX_ITEMS) {
            printf("Maximum item limit reached.\n");
            break;
        }

        printf("Enter item name: ");
        scanf("%s", items[itemCount].name);
        printf("Enter item price: ");
        scanf("%f", &items[itemCount].price);
        printf("Enter item quantity: ");
        scanf("%d", &items[itemCount].quantity);

        itemCount++;

        printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice); // Space before %c to consume any newline characters
    } while (choice == 'y' || choice == 'Y');

    printBill(items, itemCount);

    return 0;
}