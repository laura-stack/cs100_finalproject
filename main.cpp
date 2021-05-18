#include <iostream>
#include "Menu.cpp"
using namespace std;

void intro();
void search();
void movieList();
void sorts();
void addMovie();
void remMovie();
void quit();

int main() {
	Menu* myMenu = Menu::Instance();

	myMenu->addMenu("1. List all Movies", movieList);
	myMenu->addMenu("2. List all search options", search);
	myMenu->addMenu("3. List all sorting options", sorts);
	myMenu->addMenu("4. Add movie", addMovie);
	myMenu->addMenu("5. Remove movie", remMovie);
	myMenu->addMenu("6. Quit", quit);
    intro();
    myMenu->runMenu();

    return 0;
}

void intro() {
    cout << "=================================================" << endl;
    cout << "Movie Recommender" << endl;
    cout << "by: Laura Lopez, Joshua Shabun, William Mayuga" <<  endl;
    cout << "(CS 100 | Spring 2021)" <<  endl;
    cout << "=================================================" << endl;
}

void movieList() {
	cout << "Here's all the movies" << endl;
 }

void search() {
	cout << "   *By Director" << endl;
	cout << "   *By Genre" << endl;
	cout << "   *By Release Year" << endl;
	cout << "   *By Rating" << endl;
}

void sorts() {
	cout << "   *Alphabetically" << endl;
	cout << "	*Date" << endl;
	cout << "   *Rating" << endl;
}

void addMovie() {
	cout << "Insert movie info here" << endl;
}

void remMovie() {
	cout << "Insert movie removal here" << endl;
}

void quit() {
	cout << "Goodbye" << endl;
	exit(0);
}
