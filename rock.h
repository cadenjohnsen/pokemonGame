/*******************
 * Program: rock.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the rock class
 * Input: None
 * Output: None
 *******************/
#ifndef ROCK_H
#define ROCK_H
#include "pokemon.h"

using namespace std;

class rock : public pokemon {
	public:
		rock();
		int get_type();
		float get_elusiveness();
		void set_type(int);
		void set_elusiveness(double);

};
#endif
