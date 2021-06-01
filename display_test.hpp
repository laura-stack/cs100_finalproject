#ifndef __DISPLAY_TEST_HPP__
#define __DISPLAY_TEST_HPP__

#include "gtest/gtest.h" 
#include "display.hpp"
#include "Strat.hpp"
#include "movie.hpp"
#include "Scan.hpp"
#include "base.hpp" 

using namespace std;

TEST(DisplayTest, SortTenConstruct) {
   int year_test = 2021; 
   ListTenRecent *temp = new ListTenRecent(year_test); 
   int val = temp->getMovieYear(); 
   EXPECT_EQ(val, year_test); 

}

TEST(DisplayTest, SortGenreConstuct) {
   string genre = "Comedy"; 
   SortGenre *temp = new SortGenre(genre); 
   string val = temp->getMovieGenre(); 
   EXPECT_TRUE(val == genre); 
}

TEST(DisplayTest,SortDirectorConstruct) { 
   string director = "William Mayuga"; 
   SortDirector *temp = new SortDirector(director); 
   string val = temp->getMovieDirector(); 
   EXPECT_TRUE(val == director); 
} 

#endif

