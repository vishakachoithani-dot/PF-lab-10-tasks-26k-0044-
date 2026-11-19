#include <stdio.h>
#include <string.h>

struct Item {
    char name[20];
    float price;
    int qty;
};

float billTotal(struct Item list[], int n) {

    if (n == 0) {
        return 0;
    }

    return list[n-1].price * list[n-1].qty
           + billTotal(list, n-1);
}

int main() {

    struct Item cart[3];
    int i;

    for (i = 0; i < 3; i++) {

        printf("Enter item name: ");
        scanf("%19s", cart[i].name);

        printf("Enter price and quantity: ");
        scanf("%f %d", &cart[i].price, &cart[i].qty);
    }

    strcpy(cart[0].name, "Discounted");

    printf("Total bill: %.2f\n", billTotal(cart, 3));

    return 0;
}
