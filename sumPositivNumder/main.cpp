/*
    Даний одновимірний цілісний масив. Знайти:
    суму елементів масиву, розташованих до останнього позитивного елемента
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numders = { 1,2};
    int sum = 0;
    int indexLastPositivNumder = numders.size() - 1;

    for (int i = numders.size() - 1; i >= 0; i--) 
    {
        if (numders[i] < 0) continue;
        indexLastPositivNumder = i;
        break;
    }
    for (int i = 0; i < numders.size(); i++) 
    {
        if (i == indexLastPositivNumder) break;
        sum += numders[i];
    }

    cout << "Sum positiv numder: " << sum << endl;

    system("PAUSE");
    return 0;
}