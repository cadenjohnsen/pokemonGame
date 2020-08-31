/*******************
 * Program: location.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the functions for location
 * Input: None
 * Output: None
 *******************/
#include "location.h"
#include <stddef.h>

location :: location() {
	/*******************
	 * Function: location
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = 0;
	y = 0;
}

int location :: get_x() {
	/*******************
	 * Function: get_x
	 * Description: Returns x
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return x;
}

int location :: get_y() {
	/*******************
	 * Function: get_y
	 * Description: Returns y
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return y;
}

void location :: set_x(int i) {
	/*******************
	 * Function: set_x
	 * Description: Sets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = i;
}

void location :: set_y(int i) {
	/*******************
	 * Function: set_y
	 * Description: Sets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	y = i;
}
