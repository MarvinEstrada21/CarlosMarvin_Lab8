#include <string>

#ifndef REAL_H
#define REAL_H

using namespace std;

class Real {
	public:
		Real();
		virtual string operator+ (Real*);
		virtual string operator- (Real*);
		virtual string operator* (Real*);
		virtual string operator/ (Real*);
};
#endif