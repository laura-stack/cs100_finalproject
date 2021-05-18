#include <iostream>

using namespace std;

void intro();
void menu();
void option1();
void option2();
// void option3();
// void option4();
// void option5();
// void option6();

int main() {
    int menuOption = 0;

    intro();
    menu();

    cin >> menuOption;

    if (menuOption == 1) {
        option1();
    } else if(menuOption == 2) {
        option2();
    } else if(menuOption == 3) {
        // option3();
    } else if(menuOption == 4) {
        // option4();
    } else if(menuOption == 5) {
        // option5();
    } else if(menuOption == 6) {
        // option6();
    } else {
        cout << "Not a valid selection, please try again" << endl;
    }
    
    return 0;
}

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
    cout << "Enter the number of the menu option you want (i.e. 1)" << endl;
    cout << endl;
    cout << "1. List all search options" << endl;
    cout << "2. List sorting options" << endl;
    cout << "3. List all movies" << endl;
    cout << "4. Add movie" << endl;
    cout << "5. Remove movie" << endl;
    cout << "6. Quit" << endl << endl;
    cout << "Enter option: ";
}

void option1() {
    cout << endl;
    cout << "Movie Recommender - Search Options" << endl;
    cout << "    * By Director" << endl;
    cout << "    * By Genre" <<  endl;
    cout << "    * By Release Year" << endl;
    cout << "    * By Rating" << endl;
}

void option2() {
    cout << endl;
    cout << "Movie Recommender - Sorting Options" << endl;
    cout << "    * Alphabetically" << endl;
    cout << "    * Year (Newest to Oldest)" << endl;
    cout << "    * Rating (Best to Worst)" << endl;
}