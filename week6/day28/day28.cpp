//
// Created by Giperx on 2023/8/22.
//

#include "day28.h"
#include "malloc.h"

LinkList divideTwoLinkList(LinkList &A){
    LinkList B = (LNode *) malloc(sizeof (LNode));
    LNode *pre = A, *cur = A->next, *post = A->next;
    LNode *pB = B; //pB指向B链表尾结点
    while (cur){
        post = post->next;
        if (cur->data % 2){
            // 此时 cur所指结点为奇数，跳过当前结点，留在链表A
            pre = cur;
        } else{
            // 此时为偶数， 将当前结点移动至链表B尾
            pre->next = post; // A链表pre结点跨过cur偶数结点
            pB->next = cur, pB = pB->next; // 接入B链表尾，更新pB
            pB->next = nullptr; // 保证B链表尾结点的next为nullptr
        }
        cur = post; // 更新cur为下一个结点
    }
    return B;
}
