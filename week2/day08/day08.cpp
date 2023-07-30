//
// Created by Giperx on 2023/7/28.
//

#include "day08.h"
#include <iostream>
using namespace std;
void deleteValueRange(SqList &list, int a, int b){
    if (a >= b || !list.length){
        cout << "error!(must a < b and list.length != 0)" << endl;
        return;
    }
    int p1 = 0, p2 = 0, cnt = 0;
    while(p2 < list.length){
        if (list.data[p2] < a || list.data[p2] > b){
            list.data[p1] = list.data[p2];
            p1++, p2++;
        }
        else{
            cnt++, p2++;
        }
    }
    list.length -= cnt;
}
