#ifndef MENU_H
#define MENU_H
#include <iostream>

using namespace std;

class Menu {
	private:
		int option;
		string cursor;
		string menu[];
		int qtMenu[];
	public:
		Menu();
		void       setCursor    (string tempCursor);
		string     getCursor    (string tempCursor);
		void      printCursor   ();
		bool      positionTrue	();
		string   addMenuOption  (string option);
		string  printMeuOption  (string option);
		string deleteMenuOption (string option);
		
};

#endif

