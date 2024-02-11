//
// Created by Giperx on 2024/2/1.
//
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
// 判断是否为数字
bool isNumber(string item) {
    return !(item == "+" || item == "-" || item == "*" || item == "/");
}

int evalRPN(vector<string>& tokens) {
    vector<int> tmp;
    for (string item : tokens) {
        if (isNumber(item)) { // 判断是否为数字
            tmp.push_back(stoi(item));
        } else {
            int num2 = tmp.back(); // num1 calcu num2
            tmp.pop_back();
            int num1 = tmp.back();
            tmp.pop_back();
            switch (item[0]) { // string类不能作为switch判断
                case '+':
                    tmp.push_back(num1 + num2);
                    break;
                case '-':
                    tmp.push_back(num1 - num2);
                    break;
                case '*':
                    tmp.push_back(num1 * num2);
                    break;
                case '/':
                    tmp.push_back(num1 / num2);
                    break;
                default:
            }
        }
    }
    return tmp.back();
}