#ifndef __CATEGORY_HPP__
#define __CATEGORY_HPP__

#include <vector> 
#include <string>

#include "movie.hpp"
#include "base.hpp" 

using namespace std;

class Category : public Base{
private: 
   vector<Movie *> movies; 
   vector<Category *> cats;

public:
   Category() : Base() {}; 
   Category(string title, vector<string> genres) : Base(title, genres) {}; 
   
   string getTitle(); 
   vector<string> getGenres(); 
   void setTitle(string tit); 

   void addMovie(Movie* mov); 
   void addCategory(Category* newCat); 

};

#endif


