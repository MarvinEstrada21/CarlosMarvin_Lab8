#include "Real.h"
#include <string>

using namespace std;

Real :: Real() {

}

Real* Real :: operator+ (Real* suma) {
	return suma;
}

Real* Real :: operator- (Real* resta) {
	return resta;
}

Real* Real :: operator* (Real* multi) {
	return multi;
}

Real* Real :: operator/ (Real* divi) {
	return divi;
}