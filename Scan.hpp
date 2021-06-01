#ifndef __SCAN_HPP__
#define __SCAN_HPP__

#include <string>
#include <vector>
#include <map>
#include "movie.hpp"
#include "Strat.hpp"

using namespace std;

class Strat;
class Scan {
	private:
		map<string, Movie*> movMap;
		Strat* filter;
	public:
		vector<Movie*> movies;
		vector<Movie*> getMovies();
		map<string, Movie*> getMovMap();
		void setFilters(Strat* filters);
		void setMovies(vector<Movie*> movs);
		void sort();
		bool isMovie(string movName);
		void scanMovies();
};

#endif
