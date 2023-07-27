//
// Created by Giperx on 2023/7/24.
//

#ifndef ALGCAMP_SEQLIST_H
#define ALGCAMP_SEQLIST_H
// 顺序表
typedef struct SqList{
    int data[100];
    int length;
}SqList;

// 初始化顺序表
void initSqList(SqList &list);
// 打印输出顺序表
void printSqList(SqList &list);
#endif //ALGCAMP_SEQLIST_H
