#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include "base.hpp"
#include <string>
#include <vector> 

using namespace std;

class Movie : public Base { 
private: 
   string director;
   int year;
   double rating; 
public:
   Movie : Base() {} 
   Movie(string title, vector<string> genres) : Base(title, genres) {}
	
   string getDirector(); 
   int getYear(); 
   double getRating(); 
   string getTitle(); 
   vector<string> getGenres(); 

   void addDirector(string dir); 
   void addYear (int ye); 
   void addRating(double rat); 
   void setTitle(string tit); 
   void addGenre(string gen); 
   void setGenres(vector<string> gens); 

   void print(); 

};
#endif

