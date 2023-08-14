//
// Created by Giperx on 2023/8/14.
//

#include "day22.h"
#include "cmath"
#define INT_Max 0x7fffffff

bool firstIsMin(int a, int b, int c){
    if (a <= b && a <= c) return true;
    else return false;
}

int findMinDistofTrip(int A[], int n, int B[], int m, int C[], int p){
    int i = 0, j = 0, k = 0, minDist = INT_Max, tmp;
    while (i < n && j < m && k < p && minDist > 0){
        tmp = abs(A[i] - B[j]) + abs(A[i] - C[k]) + abs(B[j] - C[k]);
        if (tmp < minDist) minDist = tmp;
        if (firstIsMin(A[i], B[j], C[k])) i++;
        else if (firstIsMin(B[i], A[j], C[k])) j++;
        else k++;
    }
    return minDist;
}
