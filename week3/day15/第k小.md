### day15
![img.png](img.png)

### 思路

可以通过冒泡最小，循环k次。

或者利用排序解决，对整个数组进行排序；

或者利用小根堆，先建堆，然后弹出k次。

### 代码
```c++
// 快排
void quickSort(int arr[], int low, int high){
    if (low >= high) return;
    // partition
    int l = low, r = high;
    int povit = arr[l];
    while(l < r){
        while (l < r && arr[r] >= povit) r--;
        arr[l] = arr[r];
        while (l < r && arr[l] <= povit) l++;
        arr[r] = arr[l];
    }
    // 此时l == r
    arr[l] = povit;
    // sort
    quickSort(arr, low, l - 1);
    quickSort(arr, l + 1, high);
}
```