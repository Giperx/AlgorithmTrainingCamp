[LCR 008](https://leetcode.cn/problems/2VG8Kg/description/)

给定一个含有 `n` 个正整数的数组和一个正整数 `target` **。**

找出该数组中满足其和 `≥ target` 的长度最小的 **连续子数组** `[numsl, numsl+1, ..., numsr-1, numsr]` ，并返回其长度**。**如果不存在符合条件的子数组，返回 `0` 。

**示例 1：**

```
输入：target = 7, nums = [2,3,1,2,4,3]
输出：2
解释：子数组 [4,3] 是该条件下的长度最小的子数组。
```

**示例 2：**

```
输入：target = 4, nums = [1,4,4]
输出：1
```

**示例 3：**

```
输入：target = 11, nums = [1,1,1,1,1,1,1,1]
输出：0
```

---



**法二：滑动窗口**

即双指针，j遍历后移，满足条件时对res取min，过大时i也后移。

```c++
// 双指针，滑动窗口
int minSubArrayLen(int target, vector<int>& nums){
    int i = 0, j = 0, res = nums.size() + 1;
    int sums = 0, flag = 1;
    while (j < nums.size()){
        if (flag) sums += nums[j];
        if (sums >= target) {
            // 更新答案
            res = min(res, j - i + 1), sums -= nums[i], i++;
            // 只有一个数，也大于target，i、j同时后移
            if (i > j) {
                j++, flag = 1;
            }
            // 否则只移动i
            else{
                flag = 0;
            }
        }else{
            j++, flag = 1;
        }
    }
    return res == nums.size() + 1 ? 0 : res;
}
```



