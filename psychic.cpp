/*******************
 * Program: psychic.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the psychic functions
 * Input: None
 * Output: None
 *******************/
#include "psychic.h"

using namespace std;

psychic :: psychic() {
	/*******************
	 * Function: psychic
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = 3;
	elusiveness = .25;
}

int psychic :: get_type() {
	/*******************
	 * Function: get_type
	 * Description: Gets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return type;
}

float psychic :: get_elusiveness() {
	/*******************
	 * Function: get_elusiveness
	 * Description: Returns elusiveness
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return elusiveness;
}

void  psychic :: set_type(int t) {
	/*******************
	 * Function: set_type
	 * Description: Sets the pokemon type
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = t;
}

void psychic :: set_elusiveness(double e) {
	/*******************
	 * Function: set_elusiveness
	 * Description: Sets the pokemon elusiveness
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	elusiveness = e;
}
