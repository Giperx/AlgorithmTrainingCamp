### day36

### 思路

* 利用先序遍历，cnt为引用变量，每次访问当前结点前cnt++，作计数用。

-- 先序遍历： 访问根结点 - 递归遍历左子树 - 递归遍历右子树

-- 每次访问根节点进行特判cnt==k，输出后return，否则继续遍历。

### 代码

```c++
void PreOrderTheK(BiTree T, int &cnt, int k){
    if (!T) return;

    cnt++;
    if (cnt == k) {
        cout << "Pre order Tree list, the K TNode is : " << T->data << endl;
        return;
    }

    PreOrderTheK(T->left, cnt, k);
    PreOrderTheK(T->right, cnt, k);
}
```