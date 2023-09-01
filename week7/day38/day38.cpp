//
// Created by Giperx on 2023/9/1.
//

#include "day38.h"

int calculateWPL(BiTree T, int deep){
    if (!T) return 0;
    // 根节点
    if (!T->left && !T->right)  return T->data * deep;
    // 分子结点，继续递归
    return calculateWPL(T->left, deep + 1) + calculateWPL(T->right, deep + 1);
}
