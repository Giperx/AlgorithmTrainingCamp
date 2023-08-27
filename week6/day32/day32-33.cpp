//
// Created by Giperx on 2023/8/25.
//

#include "day32-33.h"
#include "iostream"
using namespace std;

// 先序遍历
void PreOrder(BiTree root){
    if (root){
        cout << root->data << ' ';
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

//中序遍历
void InOrder(BiTree root){
    if (root){
        cout << root->data << ' ';
        InOrder(root->left);
        InOrder(root->right);
    }
}

//后序遍历
void PostOrder(BiTree root){
    if (root){
        cout << root->data << ' ';
        PostOrder(root->left);
        PostOrder(root->right);
    }
}
