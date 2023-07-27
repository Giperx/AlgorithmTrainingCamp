//
// Created by Giperx on 2023/7/27.
//
#include <iostream>
#include "SqList.h"
using namespace std;
void initSqList(SqList &list){
    cout << "enter length of SqList:";
    cin >> list.length;
    cout << "enter values of SqList:";
    for(int i = 0; i < list.length; i ++) cin >> list.data[i];
}

void printSqList(SqList &list){
    cout << "length: " << list.length << endl;
    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
    cout << endl;
}