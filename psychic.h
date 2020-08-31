/*******************
 * Program: psychic.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the psychic class
 * Input: None
 * Output: None
 *******************/
#ifndef PSYCHIC_H
#define PSYCHIC_H
#include "pokemon.h"

using namespace std;

class psychic : public pokemon {
	public:
		psychic();
		int get_type();
		float get_elusiveness();
		void set_type(int);
		void set_elusiveness(double);
};
#endif
