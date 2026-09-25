#include <stdio.h>

int main()
{
    char name[50];
    char item[30];
    int choice, quantity;
    float price = 0, total;

    printf("===== COFFEE SHOP =====\n");

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("\n----- MENU -----\n");
    printf("1. Coffee      - Rs. 50\n");
    printf("2. Tea         - Rs. 30\n");
    printf("3. Cold Coffee - Rs. 80\n");
    printf("4. Black Coffee - Rs. 65\n");
    printf("5. Sandwich    - Rs. 100\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(choice)
    {
        case 1:
            price = 50;
            sprintf(item, "Coffee");
            break;

        case 2:
            price = 30;
            sprintf(item, "Tea");
            break;

        case 3:
            price = 80;
            sprintf(item, "Cold Coffee");
            break;

        case 4:
            price = 65;
            sprintf(item, "Black Coffee");
            break;

        case 5:
            price = 100;
            sprintf(item, "Sandwich");
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    total = price * quantity;

    printf("\n========================\n");
    printf("       COFFEE SHOP\n");
    printf("========================\n");
    printf("Customer Name : %s\n", name);
    printf("Item          : %s\n", item);
    printf("Quantity      : %d\n", quantity);
    printf("Price         : Rs. %.2f\n", price);
    printf("Total Bill    : Rs. %.2f\n", total);
    printf("========================\n");
    printf("Thank You! Visit Again.\n");

    return 0;
}