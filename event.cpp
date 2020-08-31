/*******************
 * Program: event.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the functions for event
 * Input: None
 * Output: None
 *******************/
#include "event.h"

using namespace std;

event :: event() {
	/*******************
	 * Function: event
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = 0;
	y = 0;
}

int event :: get_x() {
	/*******************
	 * Function: get_x
	 * Description: Gets the x coordinate of the event
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return x;
}

int event :: get_y() {
	/*******************
	 * Function: get_y
	 * Description: Gets the y coordinate of the event
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return y;
}

void event :: set_x(int pos) {
	/*******************
	 * Function: set_x
	 * Description: Sets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = pos;
}

void event :: set_y(int pos) {
	/*******************
	 * Function: set_y
	 * Description: Sets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	y = pos;
}
