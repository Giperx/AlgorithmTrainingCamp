//
// Created by Giperx on 2024/1/17.
// LCR 008. 长度最小的子数组
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
    cout << minSubArrayLen(target, nums);
}
