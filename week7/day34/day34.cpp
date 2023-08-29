//
// Created by Giperx on 2023/8/29.
//

#include "day34.h"

int countLeafNode(BiTree T){
    if (!T) return 0;
    if (!T->left && !T->right) return 1;
    return countLeafNode(T->left) + countLeafNode(T->right);
}
