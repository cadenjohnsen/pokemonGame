/*******************
 * Program: professor.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the professor class
 * Input: None
 * Output: None
 *******************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "player.h"

using namespace std;

class professor : public player {
	private:
		int x;
		int y;
	public:
		professor();
		int get_x();
		int get_y();
		void set_x(int);
		void set_y(int);
};
#endif
