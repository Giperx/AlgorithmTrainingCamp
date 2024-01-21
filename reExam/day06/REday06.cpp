//
// Created by Giperx on 2024/1/21.
// 旋转字符串，先对两个部分分别进行反转，再对整体进行反转。
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string rightRotate(string s, int k){
    // 左闭右开 reverse内参数
    reverse(s.begin() + s.size() - k, s.end());
    reverse(s.begin(), s.begin() + s.size() - k);
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    string s;
    int k;
    cin >> s >> k;
    cout << rightRotate(s, k);


    return 0;
}
