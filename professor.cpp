/*******************
 * Program: professor.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the professor functions
 * Input: None
 * Output: None
 *******************/
#include "professor.h"

using namespace std;

professor :: professor() {
	/*******************
	 * Function: professor
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = 0;
	y = 0;
}

int professor :: get_x() {
	/*******************
	 * Function: get_x
	 * Description: Gets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return x;
}

int professor :: get_y() {
	/*******************
	 * Function: get_y
	 * Description: Gets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return y;
}

void professor :: set_x(int i) {
	/*******************
	 * Function: set_x
	 * Description: Sets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = i;
}

void professor :: set_y(int i) {
	/*******************
	 * Function: set_y
	 * Description: Sets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	y = i;
}
