#include <stdio.h>

int main() {
    int units;
    double rate, totalBill, duty;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the rate per unit based on the consumption
    if (units <= 200) {
        rate = 0;
    } else if (units <= 400) {
        rate = 6;
    } else if (units <= 600) {
        rate = 7;
    } else {
        rate = 8;
    }

    // Calculate the cost of electricity
    totalBill = units * rate;

    // Add the fixed charge
    totalBill += 220;

    // Calculate the electricity duty (5% of the total bill)
    duty = 0.05 * totalBill;

    // Add the duty to the total bill
    totalBill += duty;

    // Display the total bill
    printf("Electricity Bill: Rs. %.2lf\n", totalBill);

    return 0;
}
