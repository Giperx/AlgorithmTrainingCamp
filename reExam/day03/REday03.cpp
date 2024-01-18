//
// Created by Giperx on 2024/1/18.
//
#include <iostream>
#include "../structDef/LinkedList.h"
using namespace std;

// 伪头结点
ListNode* reverseList(ListNode* head){
    ListNode* pre = nullptr, *cur = head, *tmp;
    while (cur){
        tmp = cur->next;
        cur->next = pre;
        pre = cur, cur = tmp;
    }
    return pre;
}
int main(){
    ListNode* tmp = createLinkedList();
    ListNode* after = reverseList(tmp);
    printList(after);
    return 0;
}
