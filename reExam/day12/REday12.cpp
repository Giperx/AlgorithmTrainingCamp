//
// Created by Giperx on 2024/1/29.
// 括号匹配，根据输入的括号串，判断是否有效
#include <iostream>
#include <vector>
using namespace std;
// 模拟栈
bool isValid(string s) {
    // 开头出现右部，直接结束
    if (s[0] == ')' || s[0] == ']' || s[0] == '}')
        return false;

    vector<int> tmp;
    for (int i = 0; i < s.size(); i++) {
        // 出现左部直接入栈
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            tmp.emplace_back(s[i]);
        else {
            // 出现右部且栈为空，直接结束
            if (!tmp.size())
                return false;
            else if (s[i] == ')') {
                if (tmp.back() == '(')
                    tmp.pop_back();
                else
                    return false;
            } else if (s[i] == '}') {
                if (tmp.back() == '{')
                    tmp.pop_back();
                else
                    return false;
            } else if (s[i] == ']') {
                if (tmp.back() == '[')
                    tmp.pop_back();
                else
                    return false;
            }
        }
    }
    // 判断结束后，栈中还有括号，直接结束
    if (tmp.size())
        return false;
    else
        return true;
}
int main(){
    string s;
    cin >> s;
    cout << isValid(s);
}