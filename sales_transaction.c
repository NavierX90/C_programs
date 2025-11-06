/*
Name : Dennis mwangi k
Reg : CT101/G/26506/25
Description : a file named sales.txt that stores the transaction of the sale
*/

#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}