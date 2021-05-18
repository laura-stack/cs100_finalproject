#ifndef __RECOMMENDATION_HPP__
#define __RECOMMENDATION_HPP__

#include <iostream>
#include <string>
#include <vector>

#include "categories.hpp"
#include "base.hpp"

using namespace std;

class Recommendation {
    public:
        virtual void recommendList(int var1, Base* var2);
};

#endif //__RECOMMENDATION_HPP__