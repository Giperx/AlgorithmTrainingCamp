//
// Created by Giperx on 2024/1/28.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


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
                if ((long long)nums[i] + nums[j] + nums[k] > target && (long long)nums[i] + nums[j] + nums[k] >= 0) break;
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

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        nums.emplace_back(tmp);
    }
    int target;
    cin >> target;
    vector<vector<int>> res = fourSum(nums, target);
    for (const auto &item: res) {
        for (const auto &item1: item) {
            cout << item1;
        }
        cout << endl;
    }
    return 0;
}