//
// Created by Giperx on 2023/8/17.
//

#include "day25.h"
#include "iostream"
using namespace std;


void reversePrintLinkList(LinkList L){
    if (!L) return;
    reversePrintLinkList(L->next);
    cout << L->data << endl;
}
