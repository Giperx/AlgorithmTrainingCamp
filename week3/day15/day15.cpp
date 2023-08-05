//
// Created by Giperx on 2023/8/5.
//

#include "day15.h"
// 快排
void quickSort(int arr[], int low, int high){
    if (low >= high) return;
    // partition
    int l = low, r = high;
    int povit = arr[l];
    while(l < r){
        while (l < r && arr[r] >= povit) r--;
        arr[l] = arr[r];
        while (l < r && arr[l] <= povit) l++;
        arr[r] = arr[l];
    }
    // 此时l == r
    arr[l] = povit;
    // sort
    quickSort(arr, low, l - 1);
    quickSort(arr, l + 1, high);
}
