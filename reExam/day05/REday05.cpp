//
// Created by Giperx on 2024/1/20.
// 替换数字 将字符串中的数字替换为number字符串
#include <iostream>
#include <cstring>
using namespace std;
const string number= "number";

string replaceNumber(string s){
    int cnt = 0;
    for (const auto &item: s) {
        if (item >= '0' && item <= '9') cnt++;
    }
//    cout << "cnt = " << cnt << endl;
    int i = s.size() - 1, j = s.size() + cnt * 5 - 1;
    s.resize(s.size() + cnt * 5, '0');
    while (i < j){
        if (s[i] >= 'a' && s[i] <= 'z') s[j] = s[i], i--, j--;
        else{
            for (int k = 0; k < 6; ++k) {
                s[j - 5 + k] = number[k];
            }
            j -= 6, i--;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << replaceNumber(s);

    return 0;
}
