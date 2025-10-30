/*
Name : Dennis mwangi
Reg : CT101/G/26506/25
Description : hotel management system of weekly revenue tracker using 1D tracker
*/

//header file

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    // to put an input
    printf("Enter revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i]; // summing total revenue
    }

    // average revenue
    average = total / 7.0;

    // results
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}
