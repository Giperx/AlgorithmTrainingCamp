//
// Created by Giperx on 2023/8/4.
//

#include "day14.h"

int binarySearch(vector<int> arr, int target){
    int l = 0, r = arr.size() - 1, mid;
    while(l <= r){
        mid = (r - l)/2 + l;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
