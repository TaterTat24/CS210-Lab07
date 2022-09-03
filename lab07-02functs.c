/** lab06-02functs.c
* ===========================================================
*    Name: Benjamin Tat
* Section: T6
* Project: Lab 7
* Purpose: Logical Operators / Selection
* ===========================================================
*/
#include "lab07-02functs.h"

int quadrantOfPoint(int x, int y) {
    if (x == 0) {
        if (y == 0) {
            return ON_ORIGIN;
        }
        else {
            return ON_Y_AXIS;
        }
    }

    else if (x > 0) {
        if (y > 0) {
            return 1;
        }
        else if (y < 0) {
            return 4;
        }
        else {
            return ON_X_AXIS;
        }
    }

    else {
        if (y > 0) {
            return 2;
        }
        else if (y < 0) {
            return 3;
        }
        else {
            return ON_X_AXIS;
        }
    }
}