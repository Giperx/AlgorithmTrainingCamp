//
// Created by Giperx on 2023/8/24.
//

#include "day31.h"

int TreeDepth(BiTree T){
    if (!T) return 0;
    int leftDepth = TreeDepth(T->left);
    int rightDepth = TreeDepth(T->right);
    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}
