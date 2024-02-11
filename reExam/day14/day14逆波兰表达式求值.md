[150. 逆波兰表达式求值](https://leetcode.cn/problems/evaluate-reverse-polish-notation/)

给你一个字符串数组 `tokens` ，表示一个根据 [逆波兰表示法](https://baike.baidu.com/item/逆波兰式/128437) 表示的算术表达式。

请你计算该表达式。返回一个表示表达式值的整数。

**注意：**

-   有效的算符为 `'+'`、`'-'`、`'*'` 和 `'/'` 。
-   每个操作数（运算对象）都可以是一个整数或者另一个表达式。
-   两个整数之间的除法总是 **向零截断** 。
-   表达式中不含除零运算。
-   输入是一个根据逆波兰表示法表示的算术表达式。
-   答案及所有中间计算结果可以用 **32 位** 整数表示。

**示例 1：**

```
输入：tokens = ["2","1","+","3","*"]
输出：9
解释：该算式转化为常见的中缀算术表达式为：((2 + 1) * 3) = 9
```

**示例 2：**

```
输入：tokens = ["4","13","5","/","+"]
输出：6
解释：该算式转化为常见的中缀算术表达式为：(4 + (13 / 5)) = 6
```

**示例 3：**

```
输入：tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
输出：22
解释：该算式转化为常见的中缀算术表达式为：
  ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
```

**提示：**

-   `1 <= tokens.length <= 104`
-   `tokens[i]` 是一个算符（`"+"`、`"-"`、`"*"` 或 `"/"`），或是在范围 `[-200, 200]` 内的一个整数

---

```c++
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
```

