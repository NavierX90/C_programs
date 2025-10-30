/*
Name : Dennis mwangi
Reg :CT101/G/26506/25
Description : room occupancy in a hotel using 2D array 
*/

//header file 
 
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    // the input to be entered
    printf("Enter room occupancy (1 for occupied, 0 for vacant):\n");

    for(floor = 0; floor < 5; floor++) {
        occupied = vacant = 0; // Reset counters for each floor
        printf("\nFloor %d:\n", floor + 1);
        
        for(room = 0; room < 10; room++) {
            scanf("%d", &occupancy[floor][room]);

            // Count occupied and vacant rooms
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        // results for the floor
        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
} 