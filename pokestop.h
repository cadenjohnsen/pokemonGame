/*******************
 * Program: pokestop.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the pokestop class
 * Input: None
 * Output: None
 *******************/
#ifndef POKESTOP_H
#define POKESTOP_H
#include "event.h"

using namespace std;

class pokestop : public event {
	private:
		int pokeballs;
	public:
		pokestop();
		int get_pokeballs();
		void set_pokeballs(int);

};
#endif
