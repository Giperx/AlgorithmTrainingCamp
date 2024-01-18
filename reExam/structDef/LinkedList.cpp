//
// Created by Giperx on 2024/1/18.
//

#include "LinkedList.h"
#include <iostream>
using namespace std;
ListNode* createLinkedList(){
    // 虚拟头结点 尾插法
    ListNode* dummyHead = new ListNode(-1);
    ListNode* current = dummyHead; // 尾结点

    int val;
    while (true){
        cin >> val;
        if (val != -1){
            ListNode* newNode = new ListNode(val);
            current->next = newNode;
            current = newNode;
        } else{
            break;
        }
    }
    ListNode* realHead = dummyHead->next;
    delete dummyHead;
    return realHead;
}
// 打印链表数据
void printList(ListNode* head){
    while (head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
}
