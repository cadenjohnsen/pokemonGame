/*******************
 * Program: player.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the player class
 * Input: None
 * Output: None
 *******************/
#ifndef PLAYER_H
#define PLAYER_H
#include "event.h"
#include "pokemon.h"
#include "flying.h"
#include "psychic.h"
#include "rock.h"
#include "location.h"

using namespace std;

class player {
	protected:
		pokemon* pokemon_array[6];
		flying *f;
		//psychic *ps;
		rock *r;
		int pokemon_num;
		int flying_num;
		int psychic_num;
		int rock_num;
		int ball_num;
		int x;
		int y;

	public:
		player();
		pokemon** get_pokemon_array();
		flying* get_flying();
		//psychic* get_psychic();
		rock* get_rock();
		int get_pokemon_num();
		int get_flying_num();
		int get_psychic_num();
		int get_rock_num();
		int get_ball_num();
		int get_x();
		int get_y();
		void set_pokemon_array(int, pokemon*);
		void set_flying(flying*);
		//void set_psychic(psychic*);
		void set_rock(rock*);
		void set_pokemon_num(int);
		void set_flying_num(int);
		void set_psychic_num(int);
		void set_rock_num(int);
		void set_ball_num(int);
		void set_x(int);
		void set_y(int);
		void create_array();
		void set_array();
                //player(const player&);
                //void operator=(const player&);
                //~player();
};
#endif
