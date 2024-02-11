//
// Created by Giperx on 2024/2/11.
//

#ifndef ALGCAMP_TREENODE_H
#define ALGCAMP_TREENODE_H
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 递归构建二叉树
TreeNode* buildTree(vector<int> &nums, int index);
#endif //ALGCAMP_TREENODE_H
