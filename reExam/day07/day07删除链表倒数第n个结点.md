给你一个链表，删除链表的倒数第 `n` 个结点，并且返回链表的头结点。

 

**示例 1：**

![img](https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg)

```
输入：head = [1,2,3,4,5], n = 2
输出：[1,2,3,5]
```

**示例 2：**

```
输入：head = [1], n = 1
输出：[]
```

**示例 3：**

```
输入：head = [1,2], n = 1
输出：[1]
```

 

**提示：**

-   链表中结点的数目为 `sz`
-   `1 <= sz <= 30`
-   `0 <= Node.val <= 100`
-   `1 <= n <= sz`



---

**快慢指针**

```c++
// 快慢指针
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
```

