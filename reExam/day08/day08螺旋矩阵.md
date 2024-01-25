[54. 螺旋矩阵](https://leetcode.cn/problems/spiral-matrix/)

给你一个 `m` 行 `n` 列的矩阵 `matrix` ，请按照 **顺时针螺旋顺序** ，返回矩阵中的所有元素。

 

**示例 1：**

![img](https://assets.leetcode.com/uploads/2020/11/13/spiral1.jpg)

```
输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
输出：[1,2,3,6,9,8,7,4,5]
```

**示例 2：**

![img](https://assets.leetcode.com/uploads/2020/11/13/spiral.jpg)

```
输入：matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
输出：[1,2,3,4,8,12,11,10,9,5,6,7]
```

 

**提示：**

-   `m == matrix.length`
-   `n == matrix[i].length`
-   `1 <= m, n <= 10`
-   `-100 <= matrix[i][j] <= 100`

```c++
int x[4] = {0, 1, 0, -1};
    int y[4] = {1, 0, -1, 0};
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> sta(n, vector<int>(m, 1));
        vector<int> res;
        int i = 0, j = -1, cnt = n * m, sub = 1, dir = 0;
        while (sub <= cnt) {
            // 边界情况，超过边界；或下一个地方已经访问过
            if (i + x[dir] >= n || i + x[dir] < 0 || j + y[dir] >= m ||
                j + y[dir] < 0 || !sta[i + x[dir]][j + y[dir]]) {
                // 改变方向
                dir = (dir + 1) % 4;
            } else {
                // 前进
                i += x[dir], j += y[dir];
                res.emplace_back(matrix[i][j]);
                sta[i][j] = 0; // 标记
                sub++; 
            }
        }
        return res;
    }
```



---

[59. 螺旋矩阵 II](https://leetcode.cn/problems/spiral-matrix-ii/)

给你一个正整数 `n` ，生成一个包含 `1` 到 `n2` 所有元素，且元素按顺时针顺序螺旋排列的 `n x n` 正方形矩阵 `matrix` 。

 

**示例 1：**

![img](https://assets.leetcode.com/uploads/2020/11/13/spiraln.jpg)

```
输入：n = 3
输出：[[1,2,3],[8,9,4],[7,6,5]]
```

**示例 2：**

```
输入：n = 1
输出：[[1]]
```

 

**提示：**

-   `1 <= n <= 20`

```c++
class Solution {
public:
    int x[4] = {0, 1, 0, -1};
    int y[4] = {1, 0, -1, 0};
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> sta(n, vector<int>(n, 0));
        int i = 0, j = -1, cnt = n * n, sub = 1, dir = 0;
        while (sub <= cnt) {
            if (i + x[dir] >= n || i + x[dir] < 0 || j + y[dir] >= n ||
                j + y[dir] < 0 || sta[i + x[dir]][j + y[dir]]) {
                // 改变方向
                dir = (dir + 1) % 4;
            } else {
                // 前进
                i += x[dir], j += y[dir];
                sta[i][j] = sub;
                sub++;
            }
        }
        return sta;
    }
};
```

