//
// Created by Giperx on 2023/8/11.
//

#include "day20.h"

int findMajorityElement(int arr[], int n){
    if (!n) return -1;
    int cand = arr[0], cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == cand) cnt++;
        else cnt--;
        if (!cnt){
            cand = arr[i];
            cnt = 1;
        }
    }
    cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == cand) cnt++;
    }
    if (cnt > (n/2)) return cand;
    else return -1;
}
