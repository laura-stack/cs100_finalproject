#ifndef __STRAT_HPP__
#define __STRAT_HPP__

class Scan;
class Strat {
	public:
		Strat(){};
		virtual void filter(Scan* scans) = 0;
};

#endif
