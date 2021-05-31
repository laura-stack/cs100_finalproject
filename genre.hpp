#ifndef __genre_hpp__
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
   vector<Base> categories;
   vector<string> genres;
public:
Genres(vector<string> newGenres) { 
  genres = newGenres; 
}

virtual void getGenres() {
   for(unsigned i = 0; i < genres.size() - 1; ++i) {
	cout << genres.at(i) << ", "; 
   } 
   cout << endl; 
}

virtual void removeMovies(Base const &newBase) { 
   vector<Base>::iterator it; 
  // it = find(categories.begin(), categories.end(), newBase); 
  // if( it != categories.end()){ 
   //   categories.erase(it); 
  // }

}  

virtual void addMovies(Base const &newBase) {} 

void displayAllInfo() { 
  // cout << "Genres: " << getGenres(); 
   for(int i = 0; i < categories.size(); ++i) {
      categories[i].displayAllInfo(); 
   }
}

}; 

#endif

