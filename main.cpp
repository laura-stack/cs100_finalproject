#include <iostream>
#include <string>
#include <map>

#include "movies.hpp"
#include "Base.hpp"
#include "category.hpp"
#include "Scan.hpp"
#include "display.hpp"

#include "menu.hpp"
#include "mainFunctions.hpp"

using namespace std;

class Movies;

// menu ================================================================
int main() {
    char menuOption = '';

    Scan* findMovie = new Scan();
    findMovie -> scanMovies();
    vector<Movies*> var1 = findMovie->getMovies();
    movieSort(var1);
    findMovie->setMovies(var1);

    intro();
    menu();

    cin >> menuOption;

	while (menuOption != 'Q' || menuOption != 'q') {
    	if (menuOption == '1') {
     		option1(findMovie);
    	} else if(menuOption == '2') {
        	option2(findMovie);
    	} else if(menuOption == '3') {
        	option4(findMovie);
    	} else if(menuOption == '4') {
        	option5(findMovie);
    	} else if(menuOption == '5') {
        	option6(findMovie);
		} else if(menuOption == 'Q' || menuOption == 'q') {
			quit();
    	} else {
        	cout << "Not a valid selection, please try again" << endl;
			menu();
    	}
    }


    return 0;
}