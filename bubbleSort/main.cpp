/*
    Написати функцію, яка сортує елементи цього масиву алгоритмом бульбашки.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include "bubbleSort.h"

using namespace std;


int main()
{
    vector<int> arr = { 10, 8, 6, 4, 2, 1};

    bubbleSort(arr);

    cout << "Resolt: " << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << "  " << arr[i] << endl;
    }

    system("PAUSE");
    return 0;
}