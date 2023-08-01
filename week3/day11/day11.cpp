//
// Created by Giperx on 2023/8/1.
//

#include "day11.h"

SqList* CombineSqList(SqList list1, SqList list2){
    SqList *list3 = new SqList;
    int p1 = 0, p2 = 0, cnt = 0;
    while (p1 < list1.length && p2 < list2.length){
        if (list1.data[p1] <= list2.data[p2]){
            list3->data[cnt] = list1.data[p1];
            p1++, cnt++;
        } else{
            list3->data[cnt] = list2.data[p2];
            p2++, cnt++;
        }
    }
    while(p1 < list1.length) list3->data[cnt++] = list1.data[p1++];
    while(p2 < list2.length) list3->data[cnt++] = list2.data[p2++];
    list3->length = cnt;
    return list3;
}
