/*
Name : Dennis mwangi
Reg : CT101/G/26506/25
Description : the hotel chain branches in 3d
*/

//header file

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room, totalOccupied = 0;

    srand(time(0)); 

    for(branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);

        for(floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;

            //random occupancy (1 = occupied, 0 = vacant)
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if(chain[branch][floor][room] == 1)
                    floorOccupied++;
            }

            //  results for the floor
            printf("Floor %d - Occupied: %d, Vacant: %d\n", 
                   floor + 1, floorOccupied, 10 - floorOccupied);

            totalOccupied += floorOccupied; // Add to total across branches
        }
    }

    //  overall results
    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n", (3 * 5 * 10) - totalOccupied);

    return 0;
}