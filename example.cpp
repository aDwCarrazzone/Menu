#include <iostream>

#include <conio.h>

#define KEY_UP    72
#define KEY_LEFT  75
#define KEY_DOWN  80
#define KEY_RIGHT 77

#include "assets/include/menu.h"

/* Main controler of the menu, menu configuration in the future should not be done here */
using namespace std;

string tCursor = "Testing";

Menu *menu = new Menu();

int pos = 1;

void showMenu();

int getKeyPress();

void returnToMain();

int main(){
	showMenu();
	getKeyPress();
	returnToMain();
    return 0;
}

void returnToMain(){
	main();
}

void showMenu(){

	system("cls");

	if (pos < 1) {
		pos = 1;
	}
	
	if (pos > 4) {
		pos = 4;
	}
	
	if(pos == 1) {
		cout << menu->printCursor() << "Option 1" << endl;
    }else{
    	cout << "Option 1" << endl;
	}
	
	if(pos == 2) {
		cout << menu->printCursor() << "Option 2" << endl;
    }else{
    	cout << "Option 2" << endl;
	}
	
	if(pos == 3) {
		cout << menu->printCursor() << "Option 3" << endl;
    }else{
    	cout << "Option 3" << endl;
	}
	
	if(pos == 4) {
		cout << menu->printCursor() << "Option 4" << endl;
    }else{
    	cout << "Option 4" << endl;
	}
	
}

int getKeyPress(){
	
	int c, ex;
		
	while(1){
    	c = getch();
        switch(ex = getch()){
            case KEY_UP			/* Up */:
            	pos--;
            	returnToMain();
                break;
            case KEY_DOWN		/* Down */:
            	pos++;
            	returnToMain();
                break;
            case KEY_LEFT		/* Left */:
            	pos--;
            	returnToMain();
                break;
            case KEY_RIGHT:		/* Right */
            	pos++;
            	returnToMain();
                break;
            default:
                cout << endl << (char) ex << endl;  // not arrow
                returnToMain();
                break;
        }
    }
}
