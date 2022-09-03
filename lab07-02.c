/** lab06-02.c
* ===========================================================
*    Name: Benjamin Tat
* Section: T6
* Project: Lab 7
* Purpose: Logical Operators / Selection
* ===========================================================
*/
#include <stdio.h>
#include "lab07-02functs.h"

int main(void) {
    int x;
    int y;
    printf("Enter the x and y values of a point: ");
    scanf("%d%d", &x, &y);

    int location;
    location = quadrantOfPoint(x, y);

    if (location > 0) {
        printf("The point (%d, %d) is in quadrant %d.\n", x, y, location);
    }
    else if (location == ON_X_AXIS) {
         printf("The point (%d, %d) is on the X-Axis.\n", x, y);
    }
    else if (location == ON_Y_AXIS) {
         printf("The point (%d, %d) is on the Y-Axis.\n", x, y);
    }
    else {
        printf("The point (%d, %d) is on the Origin.\n", x, y);
    }
    
    return 0;
}