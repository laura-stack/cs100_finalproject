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
  // EXPECT_TRUE(temp->getTitle() == temp_title); 
  // EXPECT_TRUE(temp->getGenre() == genStrings);
} 

/*TEST(BaseTest, MovieSetTitle) {
   Movie* temp = new Movie(); 
   temp->setTitle("Bee Movie"); 
   EXPECT_TRUE(temp->getTitle() == "Bee Movie");

}*/

#endif
