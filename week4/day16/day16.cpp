//
// Created by Giperx on 2023/8/7.
//

#include "day16.h"
// 冒泡排序
void bubbleSort(int arr[], int n){
    int tmp;
    // 寻找n-1轮
    for (int i = 0; i < n - 1; ++i) {
        // 每次可以确定末尾的一个位置
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j]  > arr[j + 1]){
                // 交换
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
// 简单选择排序
void selectSort(int arr[], int n){
    int tmp, mintmp;
    // 选择n-1轮
    for (int i = 0; i < n - 1; ++i) {
        mintmp = i;
        for (int j = i + 1; j < n; ++j) {
            // 更小值，记录位置
            if (arr[j] < arr[mintmp]) mintmp = j;
        }
        // 交换
        tmp = arr[i];
        arr[i] = arr[mintmp];
        arr[mintmp] = tmp;
    }
}

