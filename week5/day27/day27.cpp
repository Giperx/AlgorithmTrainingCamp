//
// Created by Giperx on 2023/8/19.
//

#include "day27.h"
#include "iostream"
using namespace std;

int findLastK(LinkList L, int k){
    int i = k;
    LNode *pre = L, *post = L;
    // 先让post移动到第k个结点处
    while (i && post){
        post = post->next, i--;
    }
    // post为null， 链表长度小于k
    if (!post) return 0;
    pre = pre->next; // 此时，pre和post相差k-1个位置
    // 当post为最后一个结点时，退出循环
    while (post->next){
        pre = pre->next, post = post->next;
    }
    cout << pre->data << endl;
    return 1;
}
