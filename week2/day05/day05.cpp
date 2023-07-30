//
// Created by Giperx on 2023/7/25.
//

#include "day05.h"
void deleteX(SqList &list, int x){
    int p1 = 0, p2 = 0, cnt = 0;
    for(; p2 < list.length; p2++){
        //出现x则跳过
        if (list.data[p2] == x) {
            cnt++;
        }
        // 否则 将非x元素前移到p1处
        else{
           list.data[p1] = list.data[p2];
           p1++;
        }
    }
    // length变化
    list.length -= cnt;
}
