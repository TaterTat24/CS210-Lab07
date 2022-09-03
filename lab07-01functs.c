/** lab06-01functs.c
* ===========================================================
*    Name: Benjamin Tat
* Section: T6
* Project: Lab 7
* Purpose: Logical Operators / Selection
* ===========================================================
*/
int displayResidenceHall(int squadronNumber) {
    if ((squadronNumber >= 1) && (squadronNumber <= 40)) {
        return 1;
    }
    else {
        return 0;
    }
}