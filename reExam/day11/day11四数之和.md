给你一个由 `n` 个整数组成的数组 `nums` ，和一个目标值 `target` 。请你找出并返回满足下述全部条件且**不重复**的四元组 `[nums[a], nums[b], nums[c], nums[d]]` （若两个四元组元素一一对应，则认为两个四元组重复）：

-   `0 <= a, b, c, d < n`
-   `a`、`b`、`c` 和 `d` **互不相同**
-   `nums[a] + nums[b] + nums[c] + nums[d] == target`

你可以按 **任意顺序** 返回答案 。

**示例 1：**

```
输入：nums = [1,0,-1,0,-2,2], target = 0
输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
```

**示例 2：**

```
输入：nums = [2,2,2,2,2], target = 8
输出：[[2,2,2,2]]
```

**提示：**

-   `1 <= nums.length <= 200`
-   `-109 <= nums[i] <= 109`
-   `-109 <= target <= 109`

---

遍历 + 二分 + 剪枝去重

```c++
int bsearch(int l, int r, int sub, vector<int>& nums) {
    int mid;
    while (l < r) {
        mid = l + r + 1 >> 1;
        if (nums[mid] <= sub)
            l = mid;
        else
            r = mid - 1;
    }
    if (nums[l] == sub)
        return 1;
    else
        return 0;
}
// 遍历 + 二分 剪枝
vector<vector<int>> fourSum(vector<int>& nums, int target) {
   vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int i = 0;
    for (; i < n - 3; i++) {
        // 剪枝，去重
        if (nums[i] > target && nums[i] >= 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            // 剪枝，去重
            if (nums[i] + nums[j] > target && nums[i] + nums[j] >= 0) break;
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            for (int k = j + 1; k < n - 1; k++) {
                long long sub = (long long)target - nums[i] - nums[j] - nums[k];
                // 剪枝去重
                if ((long long)nums[i] + nums[j] + nums[k] > target 
                    && (long long)nums[i] + nums[j] + nums[k] >= 0) break;
                if (k > j + 1 && nums[k] == nums[k - 1]) continue;
                // 二分找第四个元素
                if (bsearch(k + 1, n - 1, sub, nums)) {
                    res.emplace_back(vector<int>{nums[i], nums[j], nums[k], (int)sub});
                }
            }
        }
    }
    return res;
}
```

