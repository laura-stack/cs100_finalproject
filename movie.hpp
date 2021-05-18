#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include "base.hpp"
#include <vector>
#include <string> 

class Movie : public Base { 
   protected: //? 
     int year; 
     string director; 
     double rating; 
   public: 

   Movie (); 
  // Movie(string, vector<string> ); 


//get fxn's
  virtual  string getTitle(); 
   int getYear(); 
   string getDirector(); 
   double getRating(); 
   string getGenre(); 

  virtual void setTitle(string t) { 
    title = t; 
  } 

  void setGenres(vector<string gen) { 
     genres = gen; 
  } 


};

#endif


