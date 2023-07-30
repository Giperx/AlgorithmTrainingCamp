//
// Created by Giperx on 2023/7/24.
//

#include "day04.h"
#include <iostream>
using namespace std;
void reverseSqList(SqList &list){
    int tmp = 0, i = 0;
    for(; i < list.length/2; i ++){
       tmp = list.data[i];
       list.data[i] = list.data[list.length - i - 1];
       list.data[list.length - i - 1] = tmp;
    }
}


