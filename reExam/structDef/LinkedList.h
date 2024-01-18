//
// Created by Giperx on 2024/1/18.
//

#ifndef ALGCAMP_LINKEDLIST_H
#define ALGCAMP_LINKEDLIST_H
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* createLinkedList();
void printList(ListNode* head);

#endif //ALGCAMP_LINKEDLIST_H
