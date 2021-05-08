# Movie Recommender
 

 Authors: [Laura Lopez](https://github.com/laura-stack), [Joshua Shabun](https://github.com/jshabun), [William Mayuga](https://github.com/Aguyam1)
 
 
## Project Description:
In this application movies are organized into categories and subcategories to represent their genres and subgenres respectively. The application allows displaying movies under different categories/subcategories. It also allows adding and removing movies, categories and sub-categories. A user can provide a name of a movie that he/she likes and the application can recommend a list of movies that the user might like. Different recommendation algorithms can be implemented (e.g. based on the movie genre, director, actors ) and the resulting recommendations can also be sorted based on their rating, release date, etc.

Creating a movie recommender seemed interesting to us due to our profound love of movies. It seemed like a project we are all eager to create.

### Langauges/Tools/Technologies:
* `Valgrind` - an instrumentation framework for building dynamic analysis tools   (assists in finding and checking memory leaks)
* `C++` - the main programming language that will be utilized in this project.
* `Git/Github` - git is a local version control program that interfaces with Github, a remote repository.
* `GoogleTest` - a testing framework for C++ code
* `CMake`- allows for easier compilation and testing

### I/O:
* `input`: movie title, genre, director, release date, rating
* `output`: sorted list of recommendations based on input and sorting selection

### Design Patterns:
* `Composite` - This structural pattern composes objects in terms of a tree structure to represent part as well as a whole hierarchy. Since a movie has multiple aspects of which can be a searchable category, it’ll be difficult to group different movies together based on that.  With this, we can "branch" out from an inputted movie title and compare it with recommended movies to the user based on a related genre, director, and other comparable aspects. Therefore, our Movie object will be the "base" class and it will have subclasses that are related to the movie so that it may be compared to others to generate a recommendation.


* `Strategy` - With this design pattern, we can define multiple search algorithms such as genre, subgenre, etc. With this, the user can specify an aspect of a movie, and the program will search its database for other movies that are grouped with that aspect. If there are many search categories, main code might get overloaded with all the different implemented strategies. Main code must delegate strategies to a linked object to lessen the burden. This way we can add in more strategies and not have to tamper with the main code.