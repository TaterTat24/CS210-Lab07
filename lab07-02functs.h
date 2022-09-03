/** lab06-01functs.h
* ===========================================================
*    Name: Benjamin Tat
* Section: T6
* Project: Lab 7
* Purpose: Logical Operators / Selection
* ===========================================================
*/

#define ON_ORIGIN 0
#define ON_X_AXIS -1
#define ON_Y_AXIS -2

/** 
 *----------------------------------
 * Determines what location the point lies on
 * @param x x-coordinate
 * @param y y-coordinate
 * @return -2,1,0,1,2,3,4 depending on location
 */
int quadrantOfPoint(int x, int y);