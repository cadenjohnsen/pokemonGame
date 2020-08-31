/*******************
 * Program: event.h
 * Author: Caden Johnsen
 * Date: 5/29/17
 * Description: Contains the class event
 * Input: None
 * Output: None
 *******************/
#ifndef EVENT_H
#define EVENT_H

using namespace std;

class event {
	protected:
		int x;
		int y;
	public:
                event();
                //virtual int Event() = 0;
                virtual int get_x();
                virtual int get_y();
                virtual void set_x(int);
                virtual void set_y(int);
};
#endif
