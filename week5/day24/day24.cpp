//
// Created by Giperx on 2023/8/16.
//

#include "day24.h"
#include "malloc.h"

void appendLinkListFront(LinkList &L, int data){
    LNode *newNode = (LNode*) malloc(sizeof (LNode));
    newNode->data = data;
    // 头插
    newNode->next = L->next;
    // 更新头结点next指针
    L->next = newNode;
}
