//
// Created by Giperx on 2024/1/16.
// 有序数组的平方
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void SqrtArray(vector<int> &a){
    int l = 0, r = a.size() - 1;
    vector<int> res;
    while (l <= r){
        if (abs(a[l]) > abs(a[r])) res.emplace_back(a[l] * a[l]), l++;
        else res.emplace_back(a[r] * a[r]), r--;
    }
    for (int i = 0; i < a.size(); ++i) {
        a[i] = res[a.size() - 1 - i];
    }
}

int main(){
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a.emplace_back(tmp);
    }
    SqrtArray(a);
    for (const auto &item: a) {
        cout << item << ' ';
    }

}