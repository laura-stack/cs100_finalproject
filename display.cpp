#include "display.hpp"
#include <string>
#include <iostream> 

#include "category.hpp"
#include "movie.hpp" 
#include <vector>
#include "Scan.hpp"

using namespace std;

void ListTen::sort(Scan* mov) {
   vector<Movie* > temp = mov->getMovies(); 
   for(unsigned int i = 0; i < 10; ++i) { 
     cout << i + 1 << ") " << temp.at(i)->getMovieTitle() << ": " << temp.at(i)->getMovieRating() << endl; 
   }
   return;
}

void ListTenRecent::sort(Scan* mov) {
   int year = this->year; 
   vector<Movie* > temp = mov->getMovies(); 
   vector<Movie* > tenRecent; 
   int count = 0; 

   for(unsigned int i = 0; i < temp.size() && tenRecent.size() < 10; ++i) {
      if(temp.at(i)->getMovieYear() == year) {
         tenRecent.push_back(temp.at(i)); 
         cout << count + 1 << ") " << temp.at(i)->getMovieTitle() << ": " << temp.at(i)->getMovieRating() << endl;   
   }
}
}

int ListTenRecent::getMovieYear() {
   return this->year;
}

void SortGenre::sort(Scan* mov) {
   string genre = this->genre; 
   vector<Movie* > temp = mov->getMovies(); 
   int count = 0;

   for(unsigned int i = 0; i < temp.size() && count < 10; ++i) {
   Movie* curr_mov = temp.at(i); 
   vector<string> hold_genres = temp.at(i)->getMovieGenres();
   for(unsigned int j = 0; j < hold_genres.size(); ++j) {
      if(hold_genres.at(j) == genre) {
	cout << count + 1 << ") " << curr_mov->getMovieTitle() << ": " << curr_mov->getMovieRating() << endl; 
      count++;
      break; 
    }
  }

   }
}

string SortGenre::getMovieGenre() {
   return this->genre;
}

void SortDirector::sort(Scan* mov) {
   string director = this->director;
   vector<Movie* > temp = mov->getMovies(); 
   int count = 0; 
   for(int i = 0; i < temp.size() && count < 10; ++i) {
	if(temp.at(i)->getMovieDirector() == director) {
	   cout << count + 1 << ") " << temp.at(i) ->getMovieTitle() << ": " << temp.at(i)->getMovieRating() << endl; 
           count++;
        }
   }

}
 
string SortDirector::getMovieDirector(){
 return this->director;

}



