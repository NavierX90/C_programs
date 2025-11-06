/*
Name : Dennis mwangi k
Reg : CT101/G/26506/25
Description : a file of students data
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); // open binary file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("-----\n");
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);
        printf("-----\n");
    }

    fclose(fp);
    printf("All records displayed successfully.\n");
    return 0;
}