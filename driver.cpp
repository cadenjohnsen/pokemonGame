/*******************
 * Program: driver.cpp
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains main and runs the program
 * Input: None
 * Output: None
 *******************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include "event.h"
#include "cave.h"
#include "flying.h"
#include "location.h"
#include "player.h"
#include "pokemon.h"
#include "pokestop.h"
#include "psychic.h"
#include "rock.h"
#include "professor.h"

using namespace std;

void debug_print(int location_x[], int location_y[]) {
	/*******************
	 * Function: debug_print
	 * Description: Prints out the locations of the debug info
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	cout << "Player: " << location_x[0] << " " << location_y[0] << endl;
	cout << "Professor: " << location_x[1] << " " << location_y[1] << endl;
	cout << "Geodude: " << location_x[2] << " " << location_y[2] << endl;
	cout << "Onix: " << location_x[3] << " " << location_y[3] << endl;
	cout << "Mewtwo: " << location_x[4] << " " << location_y[4] << endl;
	cout << "Espeon: " << location_x[5] << " " << location_y[5] << endl;
	cout << "Charizard: " << location_x[6] << " " << location_y[6] << endl;
	cout << "Rayquaza: " << location_x[7] << " " << location_y[7] << endl;
	cout << "Cave: " << location_x[8] << " " << location_y[8] << endl;
	cout << "Pokestop: " << location_x[9] << " " << location_y[9] << endl;
}

int win_game(int location_x[], int location_y[], rock &geodude, rock &onix,
		psychic &mewtwo, psychic &espeon, flying &charizard, flying &rayquaza, bool &cat) {
	/*******************
	 * Function: win_game
	 * Description: Ends the game if you catch them all
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[1] && location_y[0] == location_y[1]) {
		if(geodude.get_level() == 2 && onix.get_level() == 2 && mewtwo.get_level() == 2 && espeon.get_level() == 2 &&
				charizard.get_level() == 2 && rayquaza.get_level() == 2) {
			cout << "You have caught them all! You win!" << endl;
			return 1;
			cat = false;
		}
		else {
			cout << "Professor: Go catch more pokemon!" << endl;
			return 0;
		}
	}
}

void extra(int size) {
	/*******************
	 * Function: extra
	 * Description: Extends the making of the grid
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	for(int i = 0; i < size; i++) {
		cout << "-----";
	}

	cout << "----" << endl;
}

void make_grid(int size, player &p, location &l, int location_x[], int location_y[]) {
	/*******************
	 * Function: make_grid
	 * Description: Draws the grid with the player
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	extra(size);
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(location_x[0] == j) {
				if(location_y[0] == i) {
					cout << "|  ";
					cout << "O";
				}
				else {
					cout << "|   ";
				}
			}
			else {
				cout << "|  ";
				cout << " ";
			}
			cout << "  ";
		}
		cout << "|" << endl;
		extra(size);
	}

}

void adjacent(int location_x[], int location_y[]) {
	/*******************
	 * Function: adjacent
	 * Description: Checks if there is an event nearby
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	for (int i = 0; i < 10; i++) {
		if(location_x[0] - 1 == location_x[i] && location_y[0] == location_y[i]) {
			cout << "You are next to an event!" << endl;
		}
		if(location_x[0] == location_x[i] && location_y[0] - 1 == location_y[i]) {
			cout << "You are next to an event!" << endl;
		}
		if(location_x[0] - 1 == location_x[i] && location_y[0] == location_y[i]) {
			cout << "You are next to an event!" << endl;
		}
		if(location_x[0] == location_x[i] && location_y[0] + 1 == location_y[i]) {
			cout << "You are next to an event!" << endl;
		}
	}
}

void run_away(int location_x[], int location_y[], int size) {
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			for(int k = 0; k < size; k++) {
				for(int l = 0; l < size; l++) {
					if(!(location_x[i] == location_x[k] && location_y[j] == location_y[l])) {
						location_x[i] = location_x[k];
						location_y[j] = location_y[l];
					}
				}
			}

		}
	}
}

void land_on_pokestop(int location_x[], int location_y[], player &p) {
	/*******************
	 * Function: land_on_pokestop
	 * Description: Checks if they are standing on a pokestop
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[9] && location_y[0] == location_y[9]) {
		p.set_ball_num(rand() % 7 + 3 + p.get_ball_num());
		cout << "You stepped into the Pokestop." << endl;
	}
}

void land_on_geodude(int location_x[], int location_y[], player &p, rock &geodude, int size) {
	/*******************
	 * Function: land_on_geodude
	 * Description: Checks if they are standing on a pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[2] && location_y[0] == location_y[2]) {
		cout << "You stepped on a geodude." << endl;
		if(p.get_ball_num() > 1) {
			int catch_rate = 0;
			catch_rate = rand() % 4;
			if(catch_rate == 1) {
				cout << "You missed! Geodude ran away!" << endl;
				p.set_ball_num(p.get_ball_num() - 1);
				//run_away(location_x, location_y, size);
			}
			else {
				if(geodude.get_level() == 2) {
					//nothing
				}
				else {
					cout << "You caught a geodude!" << endl;
					geodude.set_level(1);
					p.set_ball_num(p.get_ball_num() - 1);
				}
			}
		}
		else {
			cout << "You do not have enough balls!" << endl;
		}
	}
}

void land_on_onix(int location_x[], int location_y[], player &p, rock &onix, int size) {
	/*******************
	 * Function: land_on_onix
	 * Description: Checks if they are standing on a pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[3] && location_y[0] == location_y[3]) {
		cout << "You stepped on a onix." << endl;
		if(p.get_ball_num() > 1) {
			int catch_rate = 0;
			catch_rate = rand() % 4;
			if(catch_rate == 1) {
				cout << "You missed! Onix ran away!" << endl;
				p.set_ball_num(p.get_ball_num() - 1);
				//run_away(location_x, location_y, size);
			}
			else {
				if(onix.get_level() == 2) {
					//nothing
				}
				else {
					cout << "You caught an onix!" << endl;
					onix.set_level(1);
					p.set_ball_num(p.get_ball_num() - 1);
				}
			}
		}
		else {
			cout << "You do not have enough balls!" << endl;
		}
	}
}

void land_on_mewtwo(int location_x[], int location_y[], player &p, psychic &mewtwo, int size) {
	/*******************
	 * Function: land_on_mewtwo
	 * Description: Checks if they are standing on a pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[4] && location_y[0] == location_y[4]) {
		cout << "You stepped on a mewtwo." << endl;
		if(p.get_ball_num() > 1) {
			int catch_rate = 0;
			catch_rate = rand() % 4;
			if(catch_rate == 1) {
				cout << "You caught a mewtwo!" << endl;
				mewtwo.set_level(1);
				p.set_ball_num(p.get_ball_num() - 1);
			}
			else {
				if(mewtwo.get_level() == 2) {
					//nothing
				}
				else {
					cout << "You missed! Mewtwo ran away!" << endl;
					p.set_ball_num(p.get_ball_num() - 1);
					//run_away(location_x, location_y, size);
				}
			}
		}
		else {
			cout << "You do not have enough balls!" << endl;
		}
	}
}

void land_on_espeon(int location_x[], int location_y[], player &p, psychic &espeon, int size) {
	/*******************
	 * Function: land_on_espeon
	 * Description: Checks if they are standing on a pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[5] && location_y[0] == location_y[5]) {
		cout << "You stepped on an espeon." << endl;
		if(p.get_ball_num() > 1) {
			int catch_rate = 0;
			catch_rate = rand() % 4;
			if(catch_rate == 1) {
				cout << "You caught an espeon!" << endl;
				espeon.set_level(1);
				p.set_ball_num(p.get_ball_num() - 1);
			}
			else {
				if(espeon.get_level() == 2) {
					//nothing
				}
				else {
					cout << "You missed! Espeon ran away!" << endl;
					p.set_ball_num(p.get_ball_num() - 1);
					//run_away(location_x, location_y, size);
				}
			}
		}
		else {
			cout << "You do not have enough balls!" << endl;
		}
	}
}

void land_on_charizard(int location_x[], int location_y[], player &p, flying &charizard, int size) {
	/*******************
	 * Function: land_on_charizard
	 * Description: Checks if they are standing on a pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[6] && location_y[0] == location_y[6]) {
		cout << "You stepped on a charizard." << endl;
		if(p.get_ball_num() > 1) {
			int catch_rate = 0;
			catch_rate = rand() % 2;
			if(catch_rate == 1) {
				cout << "You missed! Charizard ran away!" << endl;
				p.set_ball_num(p.get_ball_num() - 1);
				//run_away(location_x, location_y, size);
			}
			else {
				if(charizard.get_level() == 2) {
					//nothing
				}
				else {
					cout << "You caught a charizard!" << endl;
					charizard.set_level(1);
					p.set_ball_num(p.get_ball_num() - 1);
				}
			}
		}
		else {
			cout << "You do not have enough balls!" << endl;
		}
	}
}

void land_on_rayquaza(int location_x[], int location_y[], player &p, flying &rayquaza, int size) {
	/*******************
	 * Function: land_on_rayquaza
	 * Description: Checks if they are standing on a pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[7] && location_y[0] == location_y[7]) {
		cout << "You stepped on a rayquaza." << endl;
		if(p.get_ball_num() > 1) {
			int catch_rate = 0;
			catch_rate = rand() % 2;
			if(catch_rate == 1) {
				cout << "You missed! Rayquaza ran away!" << endl;
				p.set_ball_num(p.get_ball_num() - 1);
				//run_away(location_x, location_y, size);
			}
			else {
				if(rayquaza.get_level() == 2) {
					//nothing
				}
				else {
					cout << "You caught a rayquaza!" << endl;
					rayquaza.set_level(1);
					p.set_ball_num(p.get_ball_num() - 1);
				}
			}
		}
		else {
			cout << "You do not have enough balls!" << endl;
		}
	}
}

void land_on_cave(int location_x[], int location_y[], player &p,
		rock &geodude, rock &onix, psychic &mewtwo, psychic &espeon, flying &charizard, flying &rayquaza, int size) {
	/*******************
	 * Function: land_on_cave
	 * Description: Checks if they are standing in a cave
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(location_x[0] == location_x[8] && location_y[0] == location_y[8]) {
		cout << "You found a cave!" << endl;
		if(geodude.get_level() == 1 && onix.get_level() == 1 && mewtwo.get_level() == 1
				&& espeon.get_level() == 1 && charizard.get_level() == 1 && rayquaza.get_level() == 1) {
			cout << "You found megastones! All pokemon level up!" << endl;
			geodude.set_level(2);
			onix.set_level(2);
			mewtwo.set_level(2);
			espeon.set_level(2);
			charizard.set_level(2);
			rayquaza.set_level(2);
		}
		else {
			cout << "Nothing is inside." << endl;
		}
	}
}

void move_up(int size, player &p, location &l, int location_x[], int location_y[]) {
	/*******************
	 * Function: move_up
	 * Description: Allows the user to move up
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	l.set_y(l.get_y() - 1);
	location_y[0] = location_y[0] - 1;
#ifdef DEBUG
	debug_print(location_x, location_y);
#endif
	adjacent(location_x, location_y);
	make_grid(size, p, l, location_x, location_y);
}

void move_left(int size, player &p, location &l, int location_x[], int location_y[]) {
	/*******************
	 * Function: move_left
	 * Description: Allows the user to move left
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	l.set_x(l.get_x() - 1);
	location_x[0] = location_x[0] - 1;
#ifdef DEBUG
	debug_print(location_x, location_y);
#endif
	adjacent(location_x, location_y);
	make_grid(size, p, l, location_x, location_y);
}

void move_right(int size, player &p, location &l, int location_x[], int location_y[]) {
	/*******************
	 * Function: move_right
	 * Description: Allows the user to move right
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	l.set_x(l.get_x() + 1);
	location_x[0] = location_x[0] + 1;
#ifdef DEBUG
	debug_print(location_x, location_y);
#endif
	adjacent(location_x, location_y);
	make_grid(size, p, l, location_x, location_y);
}

void move_down(int size, player &p, location &l, int location_x[], int location_y[]) {
	/*******************
	 * Function: move_down
	 * Description: Allows the user to move down
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	l.set_y(l.get_y() + 1);
	location_y[0] = location_y[0] + 1;
#ifdef DEBUG
	debug_print(location_x, location_y);
#endif
	adjacent(location_x, location_y);
	make_grid(size, p, l, location_x, location_y);
}

void movement(location &l, int size, player &p, int location_x[], int location_y[]) {
	/*******************
	 * Function: movement
	 * Description: Allows the user to move
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	char c;

	cout << "You have " << p.get_ball_num() << " pokeballs." << endl;
	cout << "wasd to move." << endl;

	cin >> c;
	system("clear");

	if(c == 'w') {
		move_up(size, p, l, location_x, location_y);
	}
	if(c == 'a') {
		move_left(size, p, l, location_x, location_y);
	}
	if(c == 's') {
		move_down(size, p, l, location_x, location_y);
	}
	if(c == 'd') {
		move_right(size, p, l, location_x, location_y);
	}
}

void set_location(player &p, location &l, int location_x[], int location_y[], professor &pro) {
	/*******************
	 * Function: set_location
	 * Description: Sets the professors location to that of the player at spawn
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	l.set_x(p.get_x());
	l.set_y(p.get_y());
	location_x[0] = p.get_x();
	location_y[0] = p.get_y();
	location_x[1] = location_x[0];
	location_y[1] = location_y[0];
	pro.set_x(p.get_x());
	pro.set_y(p.get_y());
}

bool extra2(int argc) {
	/*******************
	 * Function: extra2
	 * Description: Extends the valid dimensions check
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	if(argc != 3) {
		cout << "Invalid argument." << endl;
		return false;
	}
	else {
		return true;
	}
}

bool valid_dimensions(int argc, char * argv[], int &size, int &temp, player &p, location l, int location_x[], int location_y[], professor &pro) {
	/*******************
	 * Function: valid_dimensions
	 * Description: Checks if the command line arguments work
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	srand(time(NULL));
	bool cat = true;
	if(extra2(argc) == false) {
		return false;
	}
	if(!strcmp(argv[1], "-s")) {
		size = atoi(argv[2]);
		temp = rand() % size;
		p.set_x(temp);
		temp = rand() % size;
		p.set_y(temp);
		set_location(p, l, location_x, location_y, pro);
		make_grid(size, p, l, location_x, location_y);
		return true;
	}
	else {
		cout << "Invalid format." << endl;
		return false;
	}
}

void populate(player &p, location &l, rock &geodude, rock &onix, psychic &mewtwo,
		psychic &espeon, flying &charizard, flying &rayquaza) {
	/*******************
	 * Function: populate
	 * Description: Populates the pokemon array
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	for(int i = 0; i < 6; i++) {
		p.set_pokemon_array(i, &geodude); i++;
		p.set_pokemon_array(i, &onix); i++;
		p.set_pokemon_array(i, &mewtwo); i++;
		p.set_pokemon_array(i, &espeon); i++;
		p.set_pokemon_array(i, &charizard); i++;
		p.set_pokemon_array(i, &rayquaza); i++;
	}
}

void set_pokemon_location(int size, int temp, player &p,
		location &l, int location_x[], int location_y[], cave &c, pokestop &ps) {
	/*******************
	 * Function: set_pokemon_location
	 * Description: Sets the location of each instance of pokemon
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	srand(time(NULL));
	int counter = 0;
	for(int i = 0; i < 10; i++) {
start:
		counter = 0;
		location_x[i] = rand() % size;
		location_y[i] = rand() % size;
		if(i > 0) {
			for(int j = 1; j < i; j++) {
				if(location_x[i] == location_x[i-j] && location_y[i] == location_y[i-j]) {
					counter++;
				}
				if(counter != 0) {
					goto start;
				}
			}
		}
	}
	location_x[1] = location_x[0];
	location_y[1] = location_y[0];
}

void pokemon_set_levels(rock &geodude, rock &onix, psychic &mewtwo, psychic &espeon, flying &charizard, flying &rayquaza) {
	geodude.set_level(1);
	onix.set_level(1);
	mewtwo.set_level(1);
	espeon.set_level(1);
	charizard.set_level(1);
	rayquaza.set_level(1);
}

void other_functions(int location_x[], int location_y[], rock &geodude, rock &onix, psychic &mewtwo, psychic &espeon, flying &charizard,
		flying &rayquaza, pokestop &ps, cave &c, player &p, location &l, int size) {
	/*******************
	 * Function: other_functions
	 * Description: Runs other functions from main
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	land_on_pokestop(location_x, location_y, p);
	land_on_geodude(location_x, location_y, p, geodude, size);
	land_on_onix(location_x, location_y, p, onix, size);
	land_on_mewtwo(location_x, location_y, p, mewtwo, size);
	land_on_espeon(location_x, location_y, p, espeon, size);
	land_on_charizard(location_x, location_y, p, charizard, size);
	land_on_rayquaza(location_x, location_y, p, rayquaza, size);
	land_on_cave(location_x, location_y, p, geodude, onix, mewtwo, espeon, charizard, rayquaza, size);
	//win_game(location_x, location_y, geodude, onix, mewtwo, espeon, charizard, rayquaza);
}

int main(int argc, char *argv[]) {
	/*******************
	 * Function: main
	 * Description: Controls the program
	 * Parameters: None
	 * Input: None
	 * Output: None
	 *******************/
	int size = 0;
	int temp = 0;
	bool cat = true;
	srand(time(NULL));
	player p;
	professor pro;
	location l;
	rock geodude;
	rock onix;
	psychic mewtwo;
	psychic espeon;
	flying charizard;
	flying rayquaza;
	int location_x[10]; //order: player 0, professor 1, geodude 2, onix 3, mewtwo 4,
	int location_y[10]; //espeon 5, charizard 6, rayquaza 7, cave 8, pokestop 9
	cave c;
	pokestop ps;

	system("clear");
#ifdef DEBUG
	cout << "In debugger" << endl;
	pokemon_set_levels(geodude, onix, mewtwo, espeon, charizard, rayquaza);
#endif
	adjacent(location_x, location_y);
	if(valid_dimensions(argc, argv, size, temp, p, l, location_x, location_y, pro) == false) {
		return 0;
	}
	populate(p, l, geodude, onix, mewtwo, espeon, charizard, rayquaza);
	set_pokemon_location(size, temp, p, l, location_x, location_y, c, ps);
#ifdef DEBUG
	debug_print(location_x, location_y);
#endif
	while(cat == true) {
		movement(l, size, p, location_x, location_y);
		other_functions(location_x, location_y, geodude, onix, mewtwo, espeon,
				charizard, rayquaza, ps, c, p, l, size);
		if(win_game(location_x, location_y, geodude, onix, mewtwo, espeon, charizard, rayquaza, cat) == 1) {
			cat = false;
		}
	}

	return 0;
}
