//
// Created by Giperx on 2023/8/15.
//

#include "LinkList.h"
#include "malloc.h"
#include "iostream"
using namespace std;

// 初始化链表，带头结点
bool initLinkList(LinkList& L){
    L = (LNode*)malloc(sizeof (LNode));
    if (!L) return false;
    L->next = nullptr;
    return true;
}
// 计算链表长度(不包括头结点)
int lengthofLinkList(LinkList& L){
    int length = 0;
    if (!L){
        cout << "nullptr!" << endl;
    } else if (!L->next) {
        cout << "have not node!" << endl;
    } else {
        LNode *p = L->next;
        while (p){
            length++, p = p->next;
        }
    }
    return length;
}
// 输出链表信息
void printLinkList(LinkList& L){
    if (!L) cout << "nullptr!" << endl;
    else if (!L->next) cout << "have not node!" << endl;
    else{
        cout << "length of LinkList:" << lengthofLinkList(L) << endl;
        LNode *p = L->next;
        while (p){
            cout << p->data << ' ';
            p = p->next;
        }
        cout << endl;
    }
}
