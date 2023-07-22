//
// Created by Giperx on 2023/7/22.
//

#include "day03.h"
int DeleteMinRet(int *a, int &n){
    int min = a[0], k = 0;
    for(int i = 1; i < n; i ++){
        if(a[i] < min) min = a[i], k = i;
    }
    a[k] = a[n - 1];
    n--;
    return min;
}


### 代码