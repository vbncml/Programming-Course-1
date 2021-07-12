//
//  main.cpp
//  qiucksortq
//
//  Created by Жанат on 25.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int arrangement(int a[], int left, int right);
void quicksort(int a[], int left, int right);
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int left = 0;
    int right = n-1;
    quicksort(a, left, right);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
int arrangement(int a[], int left, int right)
{
    int pivotIndex = left;
    int pivotValue = a[pivotIndex];
    swap(a[pivotIndex], a[right]);
    int putIndex = left;
    for (int i = left; i < right; i ++){
        if (a[i] < pivotValue){
            swap (a[i], a[putIndex]);
            putIndex ++;
        }
    }
    swap(a[putIndex],a[right]);
    return putIndex;
}
void quicksort( int a[], int left, int right)
{
    if(left < right){
    int mid = arrangement(a, left, right);
    quicksort(a, left, mid - 1);
    quicksort(a, mid + 1, right);
    }
}