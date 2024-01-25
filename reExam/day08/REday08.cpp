//
// Created by Giperx on 2024/1/25.
//
#include <iostream>
#include <vector>
using namespace std;

int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
// 59螺旋矩阵II 返回n * n矩阵
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
// 54螺旋矩阵 根据传入的矩阵，返回螺旋路径上的所以元素
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> sta(n, vector<int>(m, 1));
    vector<int> res;
    int i = 0, j = -1, cnt = n * m, sub = 1, dir = 0;
    while (sub <= cnt){
        if (i + x[dir] >= n || i + x[dir] < 0 ||
        j + y[dir] >= m || j + y[dir] < 0 || !sta[i + x[dir]][j + y[dir]]){
            // 改变方向
            dir = (dir + 1) % 4;
        } else{
            // 前进
            i += x[dir], j += y[dir];
            res.emplace_back(matrix[i][j]);
            sta[i][j] = 0;
            sub++;
        }
    }
    return res;
}

int main(){
    int n, m;
    // 59螺旋矩阵II 返回n * n矩阵
    cin >> n;
    vector<vector<int>> res = generateMatrix(n);
    for (const auto &item: res) {
        for (const auto &item1: item) {
            cout << item1 << ' ';
        }
        cout << endl;
    }
    // 54螺旋矩阵 根据传入的矩阵，返回螺旋路径上的所以元素
//    cin >> n >> m;
//    vector<vector<int>> matrix(n, vector<int>(m, 0));
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//    vector<int> res1;
//    res1 = spiralOrder(matrix);
//    for (const auto &item: res1) {
//        cout << item << ' ';
//    }
    return 0;
}
