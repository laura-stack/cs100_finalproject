#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include "base.hpp"
#include <vector>
#include <string> 
#include <iostream>

using namespace std;

class Movie : public Base { 
private: //? 
     int year;
     string title; 
     string director; 
     double rating; 
public: 

Movie() { 
   year = 0; 
   title = ""; 
   director = ""; 
   rating = 0.0;
}

Movie (int newYear, string newTitle, string newDirector, double newRating) {
   year = newYear;
   title = newTitle;
   director = newDirector; 
   rating = newRating;
}

int getYear() { 
   return year;
}

string getTitle() { 
   return title;
}

string getDirector() { 
   return director;
}

double getRating() {
   return rating;
}

// virtual void addMovie(Base const &newMovie) {} 
// virtual void removeMovie(Base const &newMovie) {} 
 

void displayAllInfo() { 
   cout << "Movie title: " << getTitle() << endl; 
   cout << "Released in:  " << getYear() << endl; 
   cout << "Directed by: " << getDirector() << endl; 
   cout << "Rated as: " << getRating() << endl; 
} 


};

#endif


