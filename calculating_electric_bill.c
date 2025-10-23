/*
Name : Dennis mwangi kuria
Reg : CT101/G/26506/25
Description : calculating the electric bill in C
*/

#include <stdio.h>

//function to calculate the total electricity bill

float calculateElectricBill ( int units){
    float bill = 0; // variable to store the total amount

    //when units are 100 or less all are charged at 10 ksh per unit if it is 100 or less it is charged 10

    if (units <= 100) {
        bill = units * 10;
    }

    // when units are between 101 and 200 the first 100 are then which are paid 10 but the rest is 15 above 100 and is between 101 and 200

    else if ( units <= 200) {
        bill = (100 * 10) +((units - 100) * 15);
    }

    //if more than 200 , the first 100 at 10 , next 100 at 15 and rest at 20 per unit

    else {
        bill = ( 100 * 10) + ( 100 * 15) + ((units - 200) * 20);
    }

    return bill; //return the final bill

}

//core input and output function

int main() {
    int units;  // variable
    printf("Enter number of units consumed :");
    scanf("%d", &units); // units to be entered

    // print the calculated bill using our function

    printf("Total bill = ksh . %. 2f\n", calculateElectricBill(units));
    return 0;
}
