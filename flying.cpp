/*******************
 * Program: flying.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the functions for flying
 * Input: None
 * Output: None
 *******************/
#include "flying.h"

using namespace std;

flying :: flying() {
	/*******************
	 * Function: flying
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
}

int flying :: get_type() {
	/*******************
	 * Function: get_type
	 * Description: Gets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return type;
}

float flying :: get_elusiveness() {
	/*******************
	 * Function: get_elusiveness
	 * Description: Gets the chance of pokemon running away
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return elusiveness;
}

void  flying :: set_type(int t) {
	/*******************
	 * Function: set_type
	 * Description: Sets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = t;
}

void flying :: set_elusiveness(double e) {
	/*******************
	 * Function: set_elusiveness
	 * Description: Sets the elusiveness of the pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	elusiveness = e;
}
