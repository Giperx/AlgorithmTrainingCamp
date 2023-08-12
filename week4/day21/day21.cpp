//
// Created by Giperx on 2023/8/12.
//

#include "day21.h"
#include "malloc.h"

int findMinNotIn(int arr[], int n){
    if (!n) return 0;
    int *tmp = (int*)malloc(4 * n);
    for (int i = 0; i < n; ++i) {
        tmp[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= 0 || arr[i] > n) continue;
        else tmp[arr[i] - 1] = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (!tmp[i]) return i + 1;
    }
    return n + 1;
}
