#include "sumPositivNumderFun.h"

template <typename T>
T sumPositivNumderFun(vector<T>& numders) {
	T sum = 0;
	for (auto numder : numders) {
		if (numder < 0) continue;
		sum += numder;
	}
	return sum;
}