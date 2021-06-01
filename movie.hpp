#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include "base.hpp"
#include <string>
#include <vector> 

using namespace std;
//movie class
class Movie : public Base { 
private: 
   string director;
   int year;
   double rating; 
public:
   
   Movie() : Base(){} 
  
   Movie(string title, vector<string>genres) : Base(title, genres) {}
	
   string getMovieDirector(); 
   int getMovieYear(); 
   double getMovieRating(); 
   string getMovieTitle(); 
   vector<string> getMovieGenres(); 

   void addDirector(string dir); 
   void addYear (int ye); 
   void addRating(double rat); 
   void setTitle(string tit); 
   void addGenre(string gen); 
   void setGenres(vector<string> gens); 


   void print(); 

};
#endif

