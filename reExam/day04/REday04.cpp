//
// Created by Giperx on 2024/1/19.
// 哈希表
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
bool isAnagram(string s, string t){
    // 长度不同，一定不是异位词
    if (s.size() != t.size()) return false;
    // vector模拟哈希
    vector<int> sv(26, 0);
    for (const auto &item: s) {
        sv[item - 'a']++; // 计数
    }
    for (const auto &item: t) {
        if (!sv[item - 'a']) return false; // s中没有这个字母，返回false
        else sv[item - 'a']--;
    }
    int cnt = 0;
    for (const auto &item: sv) {
       cnt += item;
    }
    return cnt == 0 ? true : false;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << isAnagram(s, t);
    return 0;
}