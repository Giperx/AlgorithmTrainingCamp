//
// Created by Giperx on 2023/7/22.
//

#include <iostream>
#include <vector>
#include "structDef/List/SqList.h"
#include "week1/day03/day03.h"
#include "week2/day04/day04.h"
#include "week2/day05//day05.h"
#include "week2/day06/day06.h"
#include "week2/day07/day07.h"
#include "week2/day08/day08.h"
#include "week2/day09/day09.h"
#include "week3/day10/day10.h"
#include "week3/day11/day11.h"
#include "week3/day12/day12.h"
#include "week3/day13/day13.h"
#include "week3/day14/day14.h"
#include "week3/day15/day15.h"
#include "week4/day16/day16.h"
#include "week4/day17/day17.h"
#include "week4/day18/day18.h"
#include "week4/day19/day19.h"
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

// day19
int main(){
    int arrA[5] = {2, 4, 6, 8, 20}, arrB[5] = {11, 13, 15, 17, 19};
    cout << SerachMiddleInTwo(arrA, arrB, 5);
    return 0;
}

//// day15    day16   day17   day18
//int main(){
//    int n;
//    cin >> n;
//    int arr[n];
//    for(auto &x:arr){
//        cin >> x;
//    }
//    for(auto x:arr) cout << x << ' ';
//    cout << "enter p:";
//    int p;
//    cin >> p;
//    cout << endl;
////    quickSort(arr, 0, n - 1);
////    bubbleSort(arr, n);
////    selectSort(arr, n);
////    insertSort(arr, n);
//    leftRotate(arr, n, p);
//    cout << "after :" << endl;
//    for(auto x:arr) cout << x << ' ';
//    cout << endl;
//    return 0;
//}
//// day14
//int main(){
//    vector<int> arr;
//    int n, tmp, target;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//       cin >> tmp;
//       arr.emplace_back(tmp);
//    }
//    cin >> target;
//    cout << binarySearch(arr,target) << endl;
//    return 0;
//}
//// day13
//int main(){
//    vector<vector<int>> arr;
//    int row, col;
//    cin >> row >> col;
//    for (int i = 0; i < row; ++i) {
//        vector<int> tmp;
//        for (int j = 0; j < col; ++j) {
//            int m;
//            cin >> m;
//            tmp.emplace_back(m);
//        }
//        arr.emplace_back(tmp);
//    }
//
//    for(auto x:arr){
//        for(auto y:x){
//            cout << y << ' ';
//        }
//        cout << endl;
//    }
//    int target;
//    cin >> target;
//    cout << searchInSortedArray(arr, target) << endl;
//    return 0;
//}

//// day12
//int main(){
//    SqList list;
//    initSqList(list);
//    printSqList(list);
//    cout << "enter two list lengths:" << endl;
//    int l1, l2;
//    cin >> l1 >> l2;
//    cout << "after :" << endl;
//    superReverse(list, l1, l2);
//    printSqList(list);
//    return 0;
//}

//// day11
//int main(){
//    SqList list1;
//    cout << "init sorted list1" << endl;
//    initSqList(list1);
//    printSqList(list1);
//    SqList list2;
//    cout << "init sorted list2" << endl;
//    initSqList(list2);
//    printSqList(list2);
//    cout << "after :" << endl;
//    SqList *tmp;
//    tmp = CombineSqList(list1, list2);
//    printSqList(*tmp);
//    return 0;
//}

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