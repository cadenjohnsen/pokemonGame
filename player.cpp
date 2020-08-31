/*******************
 * Program: player.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the player functions
 * Input: None
 * Output: None
 *******************/
#include "player.h"
#include <stddef.h>

player :: player() {
	/*******************
	 * Function: player
	 * Description: Default constructor
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	f = NULL;
	//ps = NULL;
	r = NULL;
	pokemon_num = 0;
	flying_num = 0;
	psychic_num = 0;
	rock_num = 0;
	ball_num = 0;
	x = 0;
	y = 0;
}

pokemon** player :: get_pokemon_array() {
	/*******************
	 * Function: get_pokemon_array
	 * Description: Gets the array of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return pokemon_array;
}

flying* player :: get_flying() {
	/*******************
	 * Function: get_flying
	 * Description: Gets the flying array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return f;
}

/*psychic* player :: get_psychic() {
  return ps;
  }*/

rock* player :: get_rock() {
	/*******************
	 * Function: get_rock
	 * Description: Gets the rock array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return r;
}

int player :: get_pokemon_num() {
	/*******************
	 * Function: get_pokemon_num
	 * Description: Gets the size of the pokemon array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return pokemon_num;
}

int player :: get_flying_num() {
	/*******************
	 * Function: get_flying_num
	 * Description: Gets the size of the flying array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return flying_num;
}

int player :: get_psychic_num() {
	/*******************
	 * Function: get_psychic_num
	 * Description: Gets the size of the psychic array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return psychic_num;
}

int player :: get_rock_num() {
	/*******************
	 * Function: get_rock_num
	 * Description: Gets the size of the rock array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return rock_num;
}

int player :: get_ball_num() {
	/*******************
	 * Function: get_ball_num
	 * Description: Gets the number of pokeballs
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return ball_num;
}

int player :: get_x() {
	/*******************
	 * Function: get_x
	 * Description: Gets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return x;
}

int player :: get_y() {
	/*******************
	 * Function: get_y
	 * Description: Gets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	return y;
}

void player :: set_pokemon_array(int i, pokemon *po) {
	/*******************
	 * Function: set_pokemon_array
	 * Description: Sets the values of the pokemon array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	pokemon_array[i] = po;
}

void player :: set_flying(flying *fl) {
	/*******************
	 * Function: set_flying
	 * Description: Sets the flying array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	f = fl;
}

/*void player :: set_psychic(psychic *psy) {
  ps = psy;
  }*/

void player :: set_rock(rock *ro) {
	/*******************
	 * Function: set_rock
	 * Description: Sets the rock array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	r = ro;
}

void player :: set_pokemon_num(int pn) {
	/*******************
	 * Function: set_pokemon_num
	 * Description: Sets the size of the pokemon array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	pokemon_num = pn;
}

void player :: set_flying_num(int fn) {
	/*******************
	 * Function: set_flying num
	 * Description: Sets the size of the flying array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	flying_num = fn;
}

void player :: set_psychic_num(int pn) {
	/*******************
	 * Function: set_psychic_num
	 * Description: Sets the size of the psychic array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	psychic_num = pn;
}

void player :: set_rock_num(int rn) {
	/*******************
	 * Function: set_rock_num
	 * Description: Sets the size of the rock array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	rock_num = rn;
}

void player :: set_ball_num(int pb) {
	/*******************
	 * Function: set_ball_num
	 * Description: Sets the number of pokeballs
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	ball_num = pb;
}

void player :: set_x(int i) {
	/*******************
	 * Function: set_x
	 * Description: Sets the x coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	x = i;
}

void player :: set_y(int i) {
	/*******************
	 * Function: set_y
	 * Description: Sets the y coordinate
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	y = i;
}
