//
// Created by Giperx on 2024/1/25.
// 环形链表 判断链表是否有环路
#include <iostream>
#include "../structDef/LinkedList.h"
using namespace std;

// 快慢指针
bool hasCycle(ListNode* head){
    // 为空时，特判
    if (!head) return false;
    ListNode* p = head, *q = head->next;
    while (p != q && p && q){
        p = p->next;
        q = q->next;
        if (q) q = q->next;
    }
    if (p == q) return true;
    else return false;
}

int main(){
//    ListNode* L = createLinkedList();
    ListNode* head = new ListNode(3);
    ListNode* one = new ListNode(2);
    ListNode* two = new ListNode(0);
    ListNode* three = new ListNode(-4);
    // [3, 2, 0, -4] 尾结点 连接到 值为2的结点one, 存在环路
    head->next = one, one->next = two, two->next = three, three->next = one;
    cout << hasCycle(head) << endl;
    three->next = nullptr;
    cout << hasCycle(head);
    return 0;
}
