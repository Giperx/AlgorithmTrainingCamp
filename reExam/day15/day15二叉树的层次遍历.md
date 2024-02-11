[102. 二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/)

给你二叉树的根节点 `root` ，返回其节点值的 **层序遍历** 。 （即逐层地，从左到右访问所有节点）。

**示例 1：**

![img](https://assets.leetcode.com/uploads/2021/02/19/tree1.jpg)

```
输入：root = [3,9,20,null,null,15,7]
输出：[[3],[9,20],[15,7]]
```

**示例 2：**

```
输入：root = [1]
输出：[[1]]
```

**示例 3：**

```
输入：root = []
输出：[]
```

**提示：**

-   树中节点数目在范围 `[0, 2000]` 内
-   `-1000 <= Node.val <= 1000`

---

```c++
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
```

