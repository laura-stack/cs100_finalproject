#include "Movie.hpp"
#include <iostream> 
#include <vector>
#include <string>

using namespace std;

string Movie::getDirector() { 
   return this->director;
}

int Movie::getYear() {
   return this->year;
}

double Movie::getRating() {
   return this->rating; 
}

string Movie::getTitle() {
   return this->title;
} 

vector<string> Movie::getGenres() {
   return this->genres;
}

void Movie::addDirector(string dir) {
   this->director = dir; 
}

void Movie::addYear(int ye) {
   this->year = ye; 
}

void Movie::addRating(double rat) {
   this->rating = rat; 
}

void Movie::setTitle(string tit) {
   this->title = tit; 
}

void addGenre(string gen) {
   this->genres.push_back(gen); 
}

void setGenres(vector<string> gens) {
   this->genres = gens; 
}

void Movie::print() {
   cout << this->title << endl << "Director: " << director << endl << "Year released: " << year << endl << "Rating: " << rating << endl << "Genres: " <<; 

   for(int i = 0; i < genres.size(); i++) {
	cout << genres.at(i) << " " ; 
   }
 return; 
}
