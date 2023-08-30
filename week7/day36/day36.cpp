//
// Created by Giperx on 2023/8/30.
//

#include "day36.h"
#include "iostream"
using namespace std;

void PreOrderTheK(BiTree T, int &cnt, int k){
    if (!T) return;

    cnt++;
    if (cnt == k) {
        cout << "Pre order Tree list, the K TNode is : " << T->data << endl;
        return;
    }

    PreOrderTheK(T->left, cnt, k);
    PreOrderTheK(T->right, cnt, k);
}
