#include "category.hpp"
#include "movie.hpp"

#include <vector> 
#include <string>

using namespace std;
string Category::getMovieTitle() {
   return this->title;
}

vector<string> Category::getMovieGenres() {
   return this->genres;
}

void Category::setTitle(string tit) {
   this->title = tit; 
}

void Category::addMovie(Movie* mov) {
   this->movies.push_back(mov); 
}

void Category::addCategory(Category* newCat){
   this->cats.push_back(newCat);
}
