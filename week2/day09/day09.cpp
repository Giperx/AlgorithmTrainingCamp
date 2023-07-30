//
// Created by Giperx on 2023/7/29.
//

#include "day09.h"
#include "iostream"
using namespace std;
void deleteDuplicate(SqList &list){
    if (!list.length){
        cout << "error!" << endl;
        return;
    }
    int p1 = 1, p2 = 1, cnt = 0, cmp = list.data[0];
    while(p2 < list.length){
        if (cmp == list.data[p2]) {
            p2++, cnt++;
        }
        else{
            list.data[p1] = list.data[p2];
            cmp = list.data[p1];
            p1++, p2++;
        }
    }
    list.length -= cnt;
}
