/*******************
 * Program: cave.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the cave class
 * Input: None
 * Output: None
 *******************/
#ifndef CAVE_H
#define CAVE_H
#include "event.h"

using namespace std;

class cave : public event {
	private:
		bool megastone;
	public:
		cave();
		bool get_megastone();
		void set_megastone(bool);

};
#endif
