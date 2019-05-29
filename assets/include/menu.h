#ifndef CURSOR_H
#define CURSOR_H
#include <iostream>

using namespace std;

class Menu {
	private:
		string cursor;
		string menu[];
		int qtMenu[];
	public:
		base();
		void       setCursor    (string tempCursor);
		string     getCursor    (string tempCursor);
		void      printCursor   ();
		string   addMenuOption  (string option);
		string  printMeuOption  (string option);
		string deleteMenuOption (string option);
		
};

#endif

