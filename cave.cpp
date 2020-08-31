/*******************
 * Program: cave.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the cave functions
 * Input: None
 * Output: None
 *******************/
#include "cave.h"

using namespace std;

cave :: cave() {
	/*******************
	 * Function: cave
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	megastone = false;
}

bool cave :: get_megastone() {
	/*******************
	 * Function: get_megastone
	 * Description: Gets the megastone bool
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return megastone;
}

void cave :: set_megastone(bool ms) {
	/*******************
	 * Function: set_megastone
	 * Description: Sets the megastone bool
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	megastone = ms;
}
