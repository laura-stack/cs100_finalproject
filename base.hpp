#ifndef __BASE_HPP__
#define __BASE_HPP__
#include <vector> 
#include <string>
#include <iostream> 

using namespace std;

class Base { 
  protected: 
	string title;
	vector<string> genres;
  public: 
	Base() : title(""), genres() {};    

	Base(string title, vector<string> genres) : title(title), genres(genres){}; 

	virtual string getMovieTitle() = 0; 
	virtual void setTitle(string newTitle) = 0; 

};

#endif
