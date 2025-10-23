/* NAME: SADAM ABDI MUHUMED 
REG:CT101/ G/29275/25
FUNCTIONS 
*/
#include<stdio.h>
// Declaration of function to calculate Electric bill 

int calculateElectricBill(int units) {
// Function definition 
    int bill = 0;
    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main (){
    int units;
    int totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    totalBill = calculateElectricBill(units);// function calling 

    printf("Total electricity bill = KSh. %d\n", totalBill);

    return 0;
}




