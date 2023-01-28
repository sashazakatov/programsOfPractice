#include "sumPositivNumderFun.h"

int findIndexLastPositivNumder(vector<int>& numders) 
{
	int indexLastPositivNumder = -1;

	for (int i = numders.size() - 1; i >= 0; i--) 
	{
		if (numders[i] < 0) continue;
		indexLastPositivNumder = i;
		break;
	}
	
	return indexLastPositivNumder;
}
int sumPositivNumderFun(vector<int>& numders) {
	int sum = 0;
	int indexLastPositivNumder = findIndexLastPositivNumder(numders);

	if (indexLastPositivNumder == -1) indexLastPositivNumder = numders.size();

	for (int i = 0; i < numders.size(); i++) 
	{
		if (i == indexLastPositivNumder) break;
		sum += numders[i];
	}

	return sum;
}