//
// Created by Giperx on 2023/7/26.
//

#include "day06.h"
void deleteRange(SqList &list, int i, int j){
   if(i < 0 || j >= list.length) return;
   int p1 = i, p2 = j + 1;
    while (p2 < list.length){
        list.data[p1] = list.data[p2];
        p1++, p2++;
    }
    list.length -= (j - i + 1);
}
