#ifndef __BASE_TEST_HPP__
#define __BASE_TEST_HPP__

#include "gtest/gtest.h"

#include "movie.hpp"
#include "base.hpp"
#include "category.hpp"
#include <vector>
#include <string>

using namespace std;

TEST(BaseTest, TestConstructor) {
   string temp_title = "Big Hero 6"; 
   vector<string> gens = {"comedy", "horror", "action"}; 
   Movie* temp = new Movie(temp_title, gens); 
   EXPECT_TRUE(temp->getTitle() == temp_title); 
   EXPECT_TRUE(temp->getGenres() == gens);
} 

TEST(BaseTest, MovieSetTitle) {
   Movie* temp = new Movie(); 
   temp->setTitle("Aladdin"); 
   EXPECT_TRUE(temp->getTitle() == "Aladdin");

}

TEST(BaseTest, MovieSetGenre) {
   vector<string> gens = {"drama", "thriller"}; 
   Movie* temp = new Movie(); 
   temp->setGenres(gens); 
   EXPECT_TRUE(temp->getGenres() == gens);   
}

TEST(BaseTest, MovieAddDir) {
   Movie* temp = new Movie(); 
   temp->addDirector("Josh Shabun"); 
   EXPECT_TRUE(temp->getDirector() == "Josh Shabun"); 
}

TEST(BaseTest, MovieAddYear) {
   Movie* temp = new Movie(); 
   int annual = 2021; 
   temp->addYear(annual); 
   EXPECT_TRUE(temp->getYear() == 2021); 

} 

TEST(BaseTest, MovieAddRat) {
   Movie* temp = new Movie(); 
   double rat = 3.5; 
   temp->addRating(rat); 
   EXPECT_EQ(temp->getRating(), 3.5); 
}

#endif
