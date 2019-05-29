#include <iostream>
#include <conio.h>
#include "assets/include/menu.h"

using namespace std;

int main(){
	string tCursor = "--> ";
	Menu *menu = new Menu();
	
	menu->setCursor(tCursor);
	cout << "Cursor aqui: ";
	menu->printCursor();
    return 0;
}
