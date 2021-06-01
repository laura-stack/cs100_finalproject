#ifndef __MAINFUNCTIONS_HPP__
#define __MAINFUNCTIONS_HPP__

#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "movies.hpp"
#include "Base.hpp"
#include "category.hpp"
#include "Scan.hpp"
#include "display.hpp"
#include "menu.hpp"

using namespace std;

void recommend(vector<Movies*> vals, string movie_title, map<string, Movies*> movieMap);
int divide(vector<Movies*> &vals, int left, int right);
void movieSort(vector<Movies*> &vect);
void quickSort(vector<Movies*> &vals, int left, int right);

#endif //__MAINFUNCTIONS_HPP__