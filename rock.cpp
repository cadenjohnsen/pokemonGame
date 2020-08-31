/*******************
 * Program: rock.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the rock functions
 * Input: None
 * Output: None
 *******************/
#include "rock.h"

using namespace std;

rock :: rock() {
	/*******************
	 * Function: rock
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = 2;
	elusiveness = .75;
}

int rock :: get_type() {
	/*******************
	 * Function: get_type
	 * Description: Gets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return type;
}

float rock :: get_elusiveness() {
	/*******************
	 * Function: get_elusiveness
	 * Description: Gets the elusiveness of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return elusiveness;
}

void  rock :: set_type(int t) {
	/*******************
	 * Function: set_type
	 * Description: Sets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = t;
}

void rock :: set_elusiveness(double e) {
	/*******************
	 * Function: set_elusiveness
	 * Description: Sets the elusiveness of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	elusiveness = e;
}
