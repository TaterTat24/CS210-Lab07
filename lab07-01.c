/** lab06.c
* ===========================================================
*    Name: Benjamin Tat
* Section: T6
* Project: Lab 7
* Purpose: Logical Operators / Selection
* ===========================================================
*/
#include <stdio.h>
#include "lab07-01functs.h"

int main(void) {
    int squadronNumber;
    printf("Enter a squadron number: ");
    scanf("%d", &squadronNumber);

    if (displayResidenceHall(squadronNumber) == 1) {
        if (squadronNumber <= 23) {
            printf("Squadron %d is in Vandy.\n", squadronNumber);
        }
        else {
            printf("Squadron %d is in Sijan.\n", squadronNumber);
        }
    }
    else {
        printf("No such squadron exists (%d)\n", squadronNumber);
    }
    
    return 0;
}