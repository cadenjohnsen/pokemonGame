/*******************
 * Program: flying.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the flying class
 * Input: None
 * Output: None
 *******************/
#ifndef FLYING_H
#define FLYING_H
#include "pokemon.h"

using namespace std;

class flying : public pokemon {
	public:
		flying();
		int get_type();
		float get_elusiveness();
		void set_type(int);
		void set_elusiveness(double);
};
#endif
