//
// Created by Giperx on 2023/8/15.
//

#include "day23.h"
#include "malloc.h"

void appendLinkListRear(LinkList &L, int data){
    LNode *newNode = (LNode*) malloc(sizeof (LNode));
    newNode->data = data;
    newNode->next = nullptr;
    LNode *p = L;
    // 找到尾结点
    while (p->next) p = p->next;
    // 尾插
    p->next = newNode;
}
