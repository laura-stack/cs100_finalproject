#ifndef __BASE_HPP__
#define __BASE_HPP__

class Base { 
  private: 
	string title; 
  public: 
	string getTitle(); 
	string getGenre(); 
	int getYear(); 
	int getRating(); 
	int getMovieCount(); 
	string getDirectior();  
        //not yet sure of possible virtual fxn's

}

#endif
