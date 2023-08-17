//
// Created by Giperx on 2023/8/17.
//

#include "day25.h"
#include "iostream"
using namespace std;


// 递归反向输出链表
void reversePrintLinkList(LinkList L){
    if (!L) return;
    reversePrintLinkList(L->next);
    cout << L->data << endl;
}

// 反转链表 三指针
void reverseLinkList(LinkList &L){
    LNode* pre = nullptr, *cur = L->next, *post = L->next;
    while (cur){
        //记录后一个结点
        post = post->next;
        //将当前结点反转
        cur->next = pre;
        //后移
        pre = cur;
        cur = post;
    }
    // 更新头结点所指一个结点
    L->next = pre;
}
