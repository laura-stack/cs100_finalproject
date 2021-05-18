#ifndef __BASE_HPP__
#define __BASE_HPP__
#include <vector> 
#include <string>

class Base { 
  private: 
	string title;
	vector<string> genres;
  public: 
	Base() : title(""), genres() {}; 

	Base (string t, vector<string> g) {
	title = t; 
 	genres = g; 
	}

	virtual string getTitle() = 0; 
	virtual void setTitle(string newTitle) = 0; 

}

#endif
