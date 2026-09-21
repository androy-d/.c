#include <stdio.h>

int main(void) {
    float height;
    double bank_balance;
    char phone_number[15];

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your bank balance: ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%14s", phone_number);

    printf("The height is %f\n", height);
    printf("Available bank balance is %.2f\n", bank_balance);
    printf("My phone number is %s\n", phone_number);

    return 0;
}