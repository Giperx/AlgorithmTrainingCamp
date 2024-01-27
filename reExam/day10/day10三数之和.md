[15. 三数之和](https://leetcode.cn/problems/3sum/)

给你一个整数数组 `nums` ，判断是否存在三元组 `[nums[i], nums[j], nums[k]]` 满足 `i != j`、`i != k` 且 `j != k` ，同时还满足 `nums[i] + nums[j] + nums[k] == 0` 。请

你返回所有和为 `0` 且不重复的三元组。

**注意：**答案中不可以包含重复的三元组。

**示例 1：**

```
输入：nums = [-1,0,1,2,-1,-4]
输出：[[-1,-1,2],[-1,0,1]]
解释：
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 。
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 。
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 。
不同的三元组是 [-1,0,1] 和 [-1,-1,2] 。
注意，输出的顺序和三元组的顺序并不重要。
```

**示例 2：**

```
输入：nums = [0,1,1]
输出：[]
解释：唯一可能的三元组和不为 0 。
```

**示例 3：**

```
输入：nums = [0,0,0]
输出：[[0,0,0]]
解释：唯一可能的三元组和为 0 。
```

**提示：**

-   `3 <= nums.length <= 3000`
-   `-105 <= nums[i] <= 105`

---

```c++
// 排序 + 遍历 + 二分
int bsearch(int l, int r, int sub, vector<int>& nums){
    int mid;
    while (l < r){
        mid = l + r + 1 >> 1;
        if (nums[mid] <= sub) l = mid;
        else r = mid - 1;
    }
    if (nums[l] == sub) return 1;
    else return 0;
}
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int i = 0;
    for (; i < n - 2; i++) {
        // 剪枝 首位元素如果大于1，则后续没有符合条件的三元组
        if (nums[i] > 0) break;
        // 剪枝，去重
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 1; j++) {
            int sub = 0 - nums[i] - nums[j];
            // 剪枝，去重
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            if (bsearch(j + 1, n - 1, sub, nums)) {
                vector<int> tmp;
                tmp.emplace_back(nums[i]);
                tmp.emplace_back(nums[j]);
                tmp.emplace_back(sub);
                res.emplace_back(tmp);
            }
        }
    }
    return res;
}
```

