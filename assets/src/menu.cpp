#include "../include/menu.h"

Menu::Menu(){
	cursor = "UNDEFINED";
};

void Menu::setCursor(string tempCursor){
	cursor = tempCursor;
};

string Menu::getCursor(string tempCursor){
	tempCursor = cursor;
	return cursor;
};

void Menu::printCursor(){
	cout << cursor << endl;
}

bool Menu::positionTrue(){
	return position == option;
}