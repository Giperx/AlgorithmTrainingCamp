//
// Created by Giperx on 2024/2/11.
//
#include <iostream>
#include <vector>
#include <queue>
#include "../structDef/TreeNode.h"
using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> res;
    queue<TreeNode*> tmp;
    int n = 0, t = 0;
    if (root) {
        tmp.push(root);
        t = 1;
    }
    while (!tmp.empty()) {
        vector<int> levelTmp;
        while (t--) {
            TreeNode* tn = tmp.front();
            tmp.pop();
            levelTmp.push_back(tn->val);
            if (tn->left)
                tmp.push(tn->left), n++;
            if (tn->right)
                tmp.push(tn->right), n++;
        }
        res.push_back(levelTmp);
        t = n, n = 0;
    }
    return res;
}

int main(){
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    TreeNode* tn = buildTree(nums, 0);
    vector<vector<int>> res = levelOrder(tn);
    for (const auto &item: res) {
        for (const auto &item1: item) {
            cout << item1 << ' ';
        }
        cout << endl;
    }

    return 0;
}
