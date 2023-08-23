//
// Created by Giperx on 2023/8/23.
//

#include "day30.h"
#include "malloc.h"
#include "iostream"
using namespace std;

void printSortLinkList(LinkList &L, int n){
    if (!n || !L->next) return;
    // 开临时数组
    int* nums = (int*) malloc(sizeof (int) * n);
    LNode* p = L->next;
    int cnt = 0;
    // 赋值临时数组nums
    while (p){
       nums[cnt++] = p->data;
       p = p->next;
    }
    // 快排
    quickSort(nums, 0, n - 1);
    // 输出
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << ' ';
    }
    cout << endl;
    free(nums);
}
