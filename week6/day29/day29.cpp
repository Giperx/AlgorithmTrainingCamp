//
// Created by Giperx on 2023/8/22.
//

#include "day29.h"
#include "malloc.h"

void delMinOfLinkList(LinkList &L){
    if (!L->next) return;
    int min = L->next->data;
    LNode*preTmp = L, *curTmp = L->next;
    LNode* pre = curTmp, *cur = curTmp->next;
    while (cur){
        if (cur->data < min){
            min = cur->data, preTmp = pre, curTmp = cur;
        }
        pre = cur, cur = cur->next;
    }
    preTmp->next = curTmp->next;
    free(curTmp);
}
