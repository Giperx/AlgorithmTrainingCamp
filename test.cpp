//
// Created by Giperx on 2023/7/22.
//

#include <iostream>
#include "week1/day03/day03.h"
#include "week2/day04/day04.h"
#include "week2/day05//day05.h"
#include "week2/day06/day06.h"
#include "week2/day07/day07.h"
#include "week2/day08/day08.h"
#include "structDef/List/SqList.h"
#include "week2/day09/day09.h"
#include "week3/day10/day10.h"
#include "week3/day11/day11.h"
using namespace std;
//int main(){
//    SqList list;
//    initSqList(list);
//    printSqList(list);
//
//    cout << "after :" << endl;
//    printSqList(list);
//    return 0;
//}

// day11
int main(){
    SqList list1;
    cout << "init sorted list1" << endl;
    initSqList(list1);
    printSqList(list1);
    SqList list2;
    cout << "init sorted list2" << endl;
    initSqList(list2);
    printSqList(list2);
    cout << "after :" << endl;
    SqList *tmp;
    tmp = CombineSqList(list1, list2);
    printSqList(*tmp);
    return 0;
}

//// day10
//int main(){
//    SqList list;
//    cout << "init sorted list" << endl;
//    initSqList(list);
//    printSqList(list);
//    cout << "enter value a and b to delete list(sorted):";
//    int a, b;
//    cin >> a >> b;
//    deleteSortedValueRange(list, a, b);
//    cout << "after :" << endl;
//    printSqList(list);
//    return 0;
//}

//// day09
//int main(){
//   SqList list;
//    initSqList(list);
//    printSqList(list);
//    deleteDuplicate(list);
//    cout << "after :" << endl;
//    printSqList(list);
//    return 0;
//}

//// day08
//int main(){
//    SqList list;
//    initSqList(list);
//    printSqList(list);
//    int a, b;
//    cout << "enter value range a and b to delete:";
//    cin >> a >> b;
//    deleteValueRange(list, a, b);
//    cout << "after :" << endl;
//    printSqList(list);
//    return 0;
//}

//// day07
//int main(){
//    SqList list;
//    initSqList(list);
//    printSqList(list);
//    partition(list);
//    cout << "after partition:" << endl;
//    printSqList(list);
//    return 0;
//}

//// day06
//int main(){
//    SqList list;
//    cin >> list.length;
//    for(int i = 0; i < list.length; i ++) cin >> list.data[i];
//    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
//    cout << endl << "to delete range from i to j:";
//    int i, j;
//    cin >> i >> j;
//    deleteRange(list, i, j);
//    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
//    return 0;
//}

//// day05
//int main(){
//    SqList list;
//    int x;
//    cin >> list.length;
//    for(int i = 0; i < list.length; i ++) cin >> list.data[i];
//    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
//    cout << endl << "to delete value x:";
//    cin >> x;
//    deleteX(list, x);
//    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
//    return 0;
//}

//// day04
//int main(){
//    SqList list;
//    cin >> list.length;
//    for(int i = 0; i < list.length; i ++) cin >> list.data[i];
//    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
//    cout << endl;
//    reverseSqList(list);
//    for(int i = 0; i < list.length; i ++) cout << list.data[i] << ' ';
//    return 0;
//}


//// day03
//int main(){
//    int n = 5;
//    int a[5] = {5, 2, 1, 4, 8};
//    cout << DeleteMinRet(a, n) << endl;
//    for(auto x:a) cout << x << ' ';
//    cout << endl << n;
//    return 0;
//}