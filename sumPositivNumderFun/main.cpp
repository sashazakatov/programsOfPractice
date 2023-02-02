/*
	Даний одновимірний цілісний масив. 
	Знайтисуму елементів масиву, розташованих до останнього позитивного елемента
*/

#include <iostream>
#include <vector>

#include "sumPositivNumderFun.h"

using namespace std;


int main()
{
	vector<int> numders = { -1,-2,-3,-4, 5 };

	int result = sumPositivNumderFun(numders);

	cout << "The sum positiv numder: " << result << endl;

	system("PAUSE");
	return 0;
}
