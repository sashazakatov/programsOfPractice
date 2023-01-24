#pragma once
#if!defined(_BUBBLE_SORT_H_)
#define _BUBBLE_SORT_H_
#include <vector>

using namespace std;

template <typename T>
void bubbleSort(vector<T>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

#endif