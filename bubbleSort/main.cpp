#include <iostream>
#include <fstream>
#include <vector>

#include "bubbleSort.h"

using namespace std;


int main()
{
    const int SIZE = 5;
    vector<int> arr = { 10, 8, 6, 4, 2, 1 };

    bubbleSort(arr);

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}