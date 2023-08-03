//
// Created by Giperx on 2023/8/3.
//

#include "day13.h"
bool searchInSortedArray(vector<vector<int>> arr, int target){
    // 从左下角元素开始往右上方搜索
    int row = arr.size() - 1, col = 0;
    while(row >= 0 && col < arr[0].size()){
        if (arr[row][col] == target) return true;
        else if (arr[row][col] < target) col ++;
        else row --;
    }
    return false;
}
