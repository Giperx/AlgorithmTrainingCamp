//
// Created by Giperx on 2023/8/9.
//

#include "day18.h"

void reverseArray(int arr[], int low, int high){
    int tmp;
    while (low < high){
        tmp = arr[low];
        arr[low] = arr[high];
        arr[high] = tmp;
        low++, high--;
    }
}

void leftRotate(int arr[], int n, int p){
    if (p > n || p < 0) return;

    reverseArray(arr, 0, p - 1);
    reverseArray(arr, p, n - 1);
    reverseArray(arr, 0, n - 1);
}

