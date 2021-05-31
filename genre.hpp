/*#ifndef __genre_hpp__
#define __genre_hpp__

#include "base.hpp"
#include "movie.hpp"
#include <iterator>
#include <algorithm> 
#include <list>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Genres : public Base{
private: 
   vector<Movie> categories;
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

void removeMovies(Movie const &newBase) { 
   vector<Movie>::iterator it; 
   it = find(categories.begin(), categories.end(), newBase); 
   if( it != categories.end()){ 
      categories.erase(it); 
   }


}   

void addMovies(Movie const &newBase) {
   categories.push_back(newBase); 
} 

void displayAllInfo() { 
   cout << "Genres: " ;
   getGenres(); 
 
   for(int i = 0; i < categories.size(); ++i) {
      categories[i].displayAllInfo(); 
   }
}

}; 
#endif
*/ 
