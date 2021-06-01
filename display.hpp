#ifndef __DISPLAY_HPP__
#define __DISPLAY_HPP__

#include "movie.hpp"
#include "Scan.hpp" 
#include "base.hpp"
#include <string>

class Category; 

class ListTen : public Strat {

public: 
   ListTen() : Strat() {} 
   void sort(Scan* mov); 
}; 

class ListTenRecent : public Strat{
private: 
   int year;
public: 
ListTenRecent() : Strat() {};
ListTenRecent(int year){
   this->year = year;
}

int getMovieYear(); 
void sort(Scan* mov); 
}; 

class SortGenre : public Strat { 
private:
   string genre; 
public: 
   SortGenre() : Strat() {}
   SortGenre(string genre) {
   this->genre = genre;
   }
   
   string getMovieGenre(); 
   void sort(Scan* mov); 

}; 

class SortDirector : public Strat{ 
private: 
   string director;
public: 
   SortDirector() : Strat() {}
   SortDirector(string director) {
   this->director = director; 
   } 
   string getMovieDirector(); 

   void sort(Scan* mov); 

} ; 


#endif
