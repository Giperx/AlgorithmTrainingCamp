//
// Created by Giperx on 2023/8/15.
//

#ifndef ALGCAMP_LINKLIST_H
#define ALGCAMP_LINKLIST_H


typedef struct LNode{
    int data;
    struct LNode *next;
    LNode(int val){
        data = val;
        next = nullptr;
    }
}LNode, *LinkList;

// 初始化链表，带头结点
bool initLinkList(LinkList& L);
// 计算链表长度(不包括头结点)
int lengthofLinkList(LinkList& L);
// 输出链表信息
void printLinkList(LinkList& L);
#endif //ALGCAMP_LINKLIST_H
