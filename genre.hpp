#ifndef __genre_hpp__
#define __genre_hpp__

#include "base.hpp"
#include "movie.hpp"
#include <iterator>
#include <algorithm> 
#include <list>
#include <vector>
#include <string>

class Genres : public Base{
private: 
   vector<Base> categories;
   vector<string> genres;
public:
Genres(vector<string> newGenres) { 
  genres = newGenres; 
}

void getGenres() {
   for(unsigned i = 0; i < genres.size() - 1; ++i) {
	cout << genres.at(i) << ", "; 
   } 
   cout << endl; 
}

void removeMovies(Movie const &newMovie) { 
   vector<Movie>::iterator it; 
   it = find(Movie.begin(), Movie.end(), newMovie); 
   if( it != Movie.end()){ 
      Movie.eraseit(); 
   }

}

void displayInfo() { 
   cout << "Genres: " << getGenres(); 
   for(int i = 0; i < Movies.size(); ++i) {
      Movies[i].displayInfo(); 
   }
}

}; 

#endif

