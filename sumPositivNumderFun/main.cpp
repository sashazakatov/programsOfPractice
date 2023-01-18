#include <iostream>
#include <vector>

#include "sumPositivNumderFun.h"

using namespace std;


int main()
{
	vector<int> numders = { 1,2,3,4,5 };
	int resolt = sumPositivNumderFun(numders);
	cout << "The sum positiv numder: " << resolt << endl;
	return 0;
}
