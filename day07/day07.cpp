//
// Created by Giperx on 2023/7/27.
//

#include "day07.h"
#include <algorithm>
using namespace std;
void partition(SqList &list){
    int mid = list.data[0], p1 = 1, p2 = list.length - 1;
    while(p1 <= p2){
        while(p1 <= p2 && list.data[p2] > mid) p2--;
        while (p1 <= p2 && list.data[p1] <= mid) p1++;
        if(p1 < p2){
            swap(list.data[p1], list.data[p2]);
        }
    }
    swap(list.data[0], list.data[p2]);
}
