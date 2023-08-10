//
// Created by Giperx on 2023/8/10.
//

#include "day19.h"

int SerachMiddleInTwo(int arrA[], int arrB[], int length){
    int pa = 0, pb = 0, cnt = 0;
    while(pa < length && pb < length){
        if (arrA[pa] <= arrB[pb]){
            cnt++;
            if (cnt == length) return arrA[pa];
            pa++;
        }
        else{
            cnt++;
            if (cnt == length) return arrB[pb];
            pb++;
        }
    }
}
