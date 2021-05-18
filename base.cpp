#include "base.hpp"
#include <string> 

Base::Base() {
   title = ""; 
   genre = ""; 
   year = 0; 
   rating = 0; 
   moviecount = 0;
   director = ""; 
}

string Base::getTitle() { 
   return title; 
}

string Base::getGenre() { 
   return genre; 
}

int Base::getYear() {
   return year;
}

int Base::getRating() {
   return rating; 
}

int Base::getMovieCount() {
   return moviecount;
}

string Base::getDirector() {
   return director;
}
