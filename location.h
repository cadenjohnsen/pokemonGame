/*******************
 * Program: location.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the class location
 * Input: None
 * Output: None
 *******************/
#ifndef LOCATION_H
#define LOCATION_H
#include "player.h"
#include "pokemon.h"
#include "cave.h"
#include "event.h"
#include "pokestop.h"

using namespace std;

class location {
	friend class pokemon;
	private:
	int x;
	int y;
        event ***e;
	public:
	location();
	int get_x();
	int get_y();
	void set_x(int);
	void set_y(int);
};
#endif
