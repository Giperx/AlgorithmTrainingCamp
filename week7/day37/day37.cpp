//
// Created by Giperx on 2023/9/1.
//

#include "day37.h"

void findMaxInBiTree(BiTree T, BiNode* &maxNode, int &maxData){
    if (!T) return ;
    if (T->data > maxData) {
        maxNode = T, maxData = T->data;
    }

    findMaxInBiTree(T->left, maxNode, maxData);
    findMaxInBiTree(T->right,  maxNode, maxData);
}
