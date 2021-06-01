#include <iostream>
#include <string>
#include <map>

#include "movies.hpp"
#include "Base.hpp"
#include "category.hpp"
#include "Scan.hpp"
#include "display.hpp"

#include "menu.h"

using namespace std;

class Movies;

// funtions ==========================================================
/* void intro();
void menu();
void option1();
void option2();
void option3();
void option4();
void option5();
void option6();
void quit(); */

// menu ================================================================
int main() {
    char menuOption = '';

    intro();
    menu();

    cin >> menuOption;

	while (menuOption != 'Q' || menuOption != 'q') {
    	if (menuOption == '1') {
     		option1();
    	} else if(menuOption == '2') {
        	option2();
    	} else if(menuOption == '3') {
        	option3();
    	} else if(menuOption == '4') {
        	option4();
    	} else if(menuOption == '5') {
        	option5();
    	} else if(menuOption == '6') {
        	option6();
		} else if(menuOption == 'Q' || menuOption == 'q') {
			quit();
    	} else {
        	cout << "Not a valid selection, please try again" << endl;
			menu();
    	}
    }

    return 0;
}

// menu options ==============================================================
void intro() {
    cout << "=================================================" << endl;
    cout << "Movie Recommender" << endl;
    cout << "by: Laura Lopez, Joshua Shabun, William Mayuga" <<  endl;
    cout << "(CS 100 | Spring 2021)" <<  endl;
    cout << "=================================================" << endl;
}

void menu() {
    cout << endl;
    cout << "Movie Recommender Menu:" << endl;
    cout << "Enter the number of the menu option you want (i.e. 1 or q to quit)" << endl;
    cout << endl;
    cout << "1. Recommend by Title" << endl;
    cout << "2. Recommend by Genre" << endl;
    cout << "3. Recommend by Actor/Actress" << endl;
    cout << "4. Recommend by Rating" << endl;
    cout << "5. Recommend by Director" << endl;
	cout << "6. Recommend by Date"
    cout << "Q. Quit" << endl << endl;
    cout << "Enter option: ";
}

void option1() {
	
}

void option2() {
}

void option3() {
}

void option4() {
}

void option5() {
}

void option6() {
}

void quit() {
}

