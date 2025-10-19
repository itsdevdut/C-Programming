#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float units, chargePerUnit, totalAmount, surcharge = 0;


    printf("Input Customer ID : ");
    scanf("%d", &customerID);

    printf("Input the name of the customer : ");
    scanf("%s", customerName);

    printf("Input the unit consumed by the customer : ");
    scanf("%f", &units);

    if (units < 200)
        chargePerUnit = 1.20;
    else if (units < 400)
        chargePerUnit = 1.50;
    else if (units < 600)
        chargePerUnit = 1.80;
    else
        chargePerUnit = 2.00;

    totalAmount = units * chargePerUnit;

    if (totalAmount > 400)
        surcharge = totalAmount * 0.15;

    totalAmount += surcharge;


    if (totalAmount < 100)
        totalAmount = 100;


    printf("\nElectricity Bill\n");
    printf("-----------------------------\n");
    printf("Customer IDNO : %d\n", customerID);
    printf("Customer Name : %s\n", customerName);
    printf("Units Consumed : %.2f\n", units);
    printf("Amount Charges @Rs. %.2f per unit : %.2f\n", chargePerUnit, units * chargePerUnit);
    printf("Surcharge Amount : %.2f\n", surcharge);
    printf("Net Amount Paid By the Customer : %.2f\n", totalAmount);

    return 0;
}

