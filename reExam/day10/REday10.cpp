//
// Created by Giperx on 2024/1/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

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

// 排序 + 二分
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

int main(){
    int n;
    cin >> n;
    vector<int> tmp;
    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        tmp.emplace_back(c);
    }
    vector<vector<int>> res;
    res = threeSum(tmp);
    for (const auto &item: res) {
        for (const auto &item1: item) {
            cout << item1 << ' ';
        }
        cout << endl;
    }
    return 0;
}