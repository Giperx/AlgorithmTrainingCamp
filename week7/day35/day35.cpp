//
// Created by Giperx on 2023/8/29.
//

#include "day35.h"

bool judgeBST(BiTree T, char& pre){
    if (!T) return true;

    if (!judgeBST(T->left, pre)){
        return false;
    }
    if (pre >= T->data) return false;

    pre = T->data;
    return judgeBST(T->right, pre);
}
