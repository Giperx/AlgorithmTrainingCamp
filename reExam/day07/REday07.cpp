//
// Created by Giperx on 2024/1/24.
//
#include <iostream>
#include "../structDef/LinkedList.h"
using namespace std;

// 删除链表倒数第n个结点
ListNode* removeNthFromEnd(ListNode* head, int n) {
    // 伪头结点
    ListNode* dumm = new ListNode(-1, head);
    ListNode* p = dumm, *q = head;
    while(n--){
        q = q->next;
    }
    while(q){
        p = p->next, q = q->next;
    }
    ListNode* tmp = p->next;
    p->next = tmp->next;
    delete(tmp);
    p = dumm->next;
    delete(dumm);
    return p;
}

int main(){
    int n;
    ListNode* tmp = createLinkedList();
    cin >> n;
    ListNode* after = removeNthFromEnd(tmp, n);
    printList(after);
    return 0;
}
