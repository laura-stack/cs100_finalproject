#include "movie.hpp"
#include "genre.hpp"
#include "base.hpp"
#include <vector> 
#include <string>
using namespace std;

TEST(BaseTest, TestConstruct) {
   int tempYear = 1983; 
   string tempTitle = "Karate Kid";
   string tempDirector = "John Kreese";
   double tempRating = 8.0;
   vector<string> genresTemp = {"horror", "comedy"}; 

  // Movie* temp = Movie(); 
   Movie* temp = new Movie(tempYear, tempTitle, tempDirector, tempRating,genresTemp);
   EXPECT_TRUE(temp->getYear() == tempYear);
   EXPECT_TRUE(temp->getTitle() == tempTitle); 
   EXPECT_TRUE(temp->getDirector() == tempDirector);
   EXPECT_TRUE(temp->getRating() == tempRating);
   EXPECT_TRUE(temp->getGenres() == genresTemp); 

}

