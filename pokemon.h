/*******************
 * Program: pokemon.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the pokemon class
 * Input: None
 * Output: None
 *******************/
#ifndef POKEMON_H
#define POKEMON_H
#include "event.h"

using namespace std;

class pokemon : public event {
	protected:
		int type; // 1 flying 2 rock 3 psychic
		float elusiveness; //percent chance the pokemon will escape
		int x;
		int y;
                int level;
	public:
		pokemon();
		int get_type();
                virtual float get_elusiveness();
		int get_x();
		int get_y();
                int get_level();
		void set_type(int);
		void set_elusiveness(double);
		void set_x(int);
		void set_y(int);
                void set_level(int);
};
#endif

