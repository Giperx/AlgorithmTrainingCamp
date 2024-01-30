//
// Created by Giperx on 2024/1/30.
//
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

string removeDuplicates(string s){
    string tmp;

    for (int i = 0; i < s.size(); i++) {
        if (!tmp.empty() && s[i] == tmp.back()) {
            tmp.pop_back();
        } else {
            tmp.push_back(s[i]);
        }
    }

    return tmp;
}

int main(){
    string s;
    cin >> s;
    cout << removeDuplicates(s);

    return 0;
}

