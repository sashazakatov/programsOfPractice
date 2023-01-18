/*
1. Даний одновимірний цілісний масив. Знайти:
суму елементів масиву, розташованих до останнього позитивного елемента
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numders = { 1,2,3,4,-5 };
    int sum = 0;

    for (auto numder : numders) {
        if (numder < 0) continue;
        sum += numder;
    }

    cout << sum << endl;
    return 0;
}