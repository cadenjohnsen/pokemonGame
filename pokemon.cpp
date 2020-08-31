/*******************
 * Program: pokemon.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the pokemon functions
 * Input: None
 * Output: None
 *******************/
#include "pokemon.h"

using namespace std;

pokemon :: pokemon() {
	/*******************
	 * Function: pokemon
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = 1;
	elusiveness = .5;
        x = 0;
        y = 0;
        level = 0;
}

int pokemon :: get_type() {
	/*******************
	 * Function: get_type
	 * Description: Gets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return type;
}

float pokemon :: get_elusiveness() {
	/*******************
	 * Function: get_elusiveness
	 * Description: Gets the elusiveness of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return elusiveness;
}

int pokemon :: get_x() {
	/*******************
	 * Function: get_x
	 * Description: Gets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return x;
}

int pokemon :: get_y() {
	/*******************
	 * Function: get_y
	 * Description: Gets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return y;
}

int pokemon :: get_level() {
        /*******************
         * Function: get_level
         * Description: Gets the level of pokemon
         * Parameters: None
         * Input: None
         * Output: None
         *******************/
        return level;
}

void  pokemon :: set_type(int t) {
	/*******************
	 * Function: set_type
	 * Description: Sets the type of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	type = t;
}

void pokemon :: set_elusiveness(double e) {
	/*******************
	 * Function: set_elusiveness
	 * Description: Sets the elusiveness of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	elusiveness = e;
}

void pokemon :: set_x(int pos) {
	/*******************
	 * Function: set_x
	 * Description: Sets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = pos;
}

void pokemon :: set_y(int pos) {
	/*******************
	 * Function: set_y
	 * Description: Sets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	y = pos;
}

void pokemon :: set_level(int l) {
        level = l;
}
