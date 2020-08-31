/*******************
 * Program: pokestop.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the pokestop functions
 * Input: None
 * Output: None
 *******************/
#include "pokestop.h"

using namespace std;

pokestop :: pokestop() {
	/*******************
	 * Function: pokestop
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	pokeballs = 0;
}

int pokestop :: get_pokeballs() {
	/*******************
	 * Function: get_pokeballs
	 * Description: Returns pokeballs
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return pokeballs;
}

void pokestop :: set_pokeballs(int pb) {
	/*******************
	 * Function: set_pokeballs
	 * Description: Sets the pokeball num
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	pokeballs = pb;
}
