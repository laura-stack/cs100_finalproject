#include "movie.hpp"
#include "genre.hpp"
#include "base.hpp"

using namespace std;

TEST(BaseTest, TestConstruct) {
   int tempYear = 1983; 
   string tempTitle = "Karate Kid";
   string tempDirector = "John Kreese";
   double tempRating = 8.0;


  // Movie* temp = Movie(); 
   Movie* temp = new Movie(tempYear, tempTitle, tempDirector, tempRating);
   //EXPECT_TRUE(temp->getTitle() == tempTitle); 
}


