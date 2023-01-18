#include "sumPositivNumderFun.h"

int sumPositivNumderFun(vector<int>& numders) {
	int sum = 0;
	for (auto numder : numders) {
		if (numder < 0) continue;
		sum += numder;
	}
	return sum;
}