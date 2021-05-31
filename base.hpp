#ifndef __BASE_HPP__
#define __BASE_HPP__
#include <vector> 
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

class Base { 
  public: 
	virtual void addMovie(Base const &newMovie) = 0;
        virtual void removeMovie(Base const &newMovie) = 0; 

	virtual string getTitle() = 0; 
	virtual void getGenre() = 0; 
	virtual void displayAllInfo() = 0; 
};
#endif
