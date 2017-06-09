#include <string>

#ifndef REAL_H
#define REAL_H

using namespace std;

class Real {
	public:
		Real();
		virtual string operator+ (Real*);
		virtual Real* operator- (Real*);
		virtual Real* operator* (Real*);
		virtual Real* operator/ (Real*);
};
#endif