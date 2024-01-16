![image-20240116213226874](ForImage/image-20240116213226874.png)

额外要求：设计时间复杂度为O(n)的算法

---



首先想到的是平方和sort一下，但是时间复杂度达到了`nlogn`，按照额外要求的话，需要继续降低时间复杂度。考虑到已经有序，可以利用双指针，额外开辟数组，依次向内靠拢，将`abs()`绝对值更大的元素加入vector，并移动对应的指针。



**思路**：

`双指针法`

```c++
void SqrtArray(vector<int> &a){
    int l = 0, r = a.size() - 1;
    vector<int> res;
    while (l <= r){
        if (abs(a[l]) > abs(a[r])) res.emplace_back(a[l] * a[l]), l++;
        else res.emplace_back(a[r] * a[r]), r--;
    }
    for (int i = 0; i < a.size(); ++i) {
        a[i] = res[a.size() - 1 - i];
    }
}
```



