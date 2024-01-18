三指针

```c++
ListNode* reverseList(ListNode* head){
    ListNode* pre = nullptr, *cur = head, *tmp;
    while (cur){
        tmp = cur->next;
        cur->next = pre;
        pre = cur, cur = tmp;
    }
    return pre;
}
```