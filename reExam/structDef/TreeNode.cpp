//
// Created by Giperx on 2024/2/11.
//

#include "TreeNode.h"
// 通过顺序存储来构建
TreeNode* buildTree(vector<int> &nums, int index){
    if (index >= nums.size() || nums[index] == -1){ // null作-1输入
        return nullptr;
    }
    TreeNode* root = new TreeNode(nums[index]);
    root->left = buildTree(nums, 2 * index + 1); // 左子树
    root->right = buildTree(nums, 2 * index + 2); // 右子树

    return root;
}
