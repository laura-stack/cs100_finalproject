#ifndef __STRAT_HPP__
#define __STRAT_HPP__

class Scan;
class Strat {
	public:
		Strat(){};
		virtual void sort(Scan* mov) = 0;
};

#endif
