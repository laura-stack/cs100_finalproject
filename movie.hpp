#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__

#include "base.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Movie : public Base {
private: //?
     int year;
     string title;
     string director;
     double rating;
     vector<string> genres;
public:

Movie() {
   year = 0;
   title = "";
   director = "";
   rating = 0.0;
}

Movie (int newYear, string newTitle, string newDirector, double newRating, vector<string> newGenres) {
   year = newYear;
   title = newTitle;
   director = newDirector;
   rating = newRating;
   genres = newGenres;
}

int getYear() {
   return year;
}

string getTitle() {
   return title;
}

string getDirector() {
   return director;
}

double getRating() {
   return rating;
}
                                 
