#ifndef __RECOMMEND_CLASS_HPP__
#define __RECOMMEND_CLASS_HPP__

#include <iostream> 
#include <string>
#include <vector>

using namespace std;

struct Entry { 
   int year;
   string title; 
   string director; 
   double rating; 
   vector<string> genres;
}

bool yearAscending(Entry one, Entry two) {
   return one.year < two.year;
}

bool yearDescending(Entry one, Entry two) {
   return one.year > two.year; 
}

bool titleAscending(Entry one, Entry two) { 
   return one.title < two.title;
}

bool titleDescending(Entry one, Entry two) {
   return one.title > two.title;
}

bool ratingAscending(Entry one, Entry two) {
   return one.rating < two.rating;
}

bool ratingDescending(Entry one, Entry two) {
   return one.rating > two.rating;
}



