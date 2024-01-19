[242 .有效的字母异位词](https://leetcode.cn/problems/valid-anagram/)

给定两个字符串 `*s*` 和 `*t*` ，编写一个函数来判断 `*t*` 是否是 `*s*` 的字母异位词。

**注意：**若 `*s*` 和 `*t*` 中每个字符出现的次数都相同，则称 `*s*` 和 `*t*` 互为字母异位词。

**示例 1:**

```
输入: s = "anagram", t = "nagaram"
输出: true
```

**示例 2:**

```
输入: s = "rat", t = "car"
输出: false
```



**提示:**

-   `1 <= s.length, t.length <= 5 * 104`
-   `s` 和 `t` 仅包含小写字母



---

```c++
// 哈希
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
```

