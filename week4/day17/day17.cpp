//
// Created by Giperx on 2023/8/8.
//

#include "day17.h"
// 直接插入排序
void insertSort(int arr[], int n){
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // 哨兵
        int sub = i - 1;
        // 从后往前，找到正确位置
        while (sub >= 0 && arr[sub] > key){
            // 依次后移
            arr[sub + 1] = arr[sub];
            sub--;
        }
        // 此时arr[sub] <= key, arr[sub + 1]元素已经后移了
        arr[sub + 1] = key;
    }
}
