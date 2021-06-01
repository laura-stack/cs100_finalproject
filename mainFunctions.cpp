#include "mainFunctions.hpp"

#include <iostream>

using namespace std;

void recommend(vector<Movies*> vals, string movies_title, map<string, Movies*> movieMap) {
 
    Movies* ogMovie =  movieMap.find(movies_title)->second;
  
    int count = 0;
    vector<string> ogGenres = ogMovie->getGenres();
    cout << endl<< "Recommended Movies:" << endl << endl;
  
    for(unsigned int i = 0; i < vals.size() && count < 3; ++i){
        int closeEnough = 0; 
        if(movie_title == vals.at(i)->getMovieTitle()){
            i++;
        }
    }

    if(vals.at(i)->getMovieDirector() == ogMovie->getMovieDirector()) {
        closeEnough++;
    }

    vector<string> tmp2 = vals.at(i)->getMovieGenres();
    for(int j = 0; j < ogGenres.size(); j++) {
        for(int k = 0; k < tmp2.size(); k++ ) {
            if(ogGenres.at(j) == temp2.at(k)){
                closeEnough++; 
            }
        }
    }

    if(closeEnough >= 3) {
        vals.at(i)->print();
        cout << endl;
        count++;
    }
  
}

int divide(vector<Movies*> &vals, int left, int right) {
    double piv_i = left + (right - left) / 2;
    double piv_val = vals.at(piv_i)->getMovieRating();
    double i = left
    double j = right;
    Movies* tmp;
    while(i <= j) {
        while(vals.at(i)->getMovieRating() > piv_val) {
            i++;
        }

        while(vals.at(j)->getMovieRating() < piv_val) {
            j--;
        }

        if(i <= j) {
            tmp = vals[i];
            vals[i] = vals[j];
            vals[j] = tmp;
            i++;
            j--;
        }
    }
    return i;
}

void movieSort(vector<Movies*> &vect) {
    quickSort(vect, 0, vect.size() - 1);
}

void quickSort(vector<Movies*> &vals, int left, int right) {
    if(left < right) {
        int piv_i = divide(values, left, right);
        quickSort(vals, left, piv_i - 1);
        quickSort(vals, piv_i, right);
    }
}


