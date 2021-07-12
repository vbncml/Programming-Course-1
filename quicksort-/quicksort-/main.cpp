//
//  main.cpp
//  quicksort-
//
//  Created by Жанат on 18.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int arrangement (int a[], int right,int left);
void quicksort(int a[], int right, int left);
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int right = n-1;
    int left = 0;
    
    quicksort (a,left,right);
    cout << "After total sorting: ";
    for (int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
int arrangement (int a[], int left, int right)
{
    cout << "Before "<< endl ;
    for (int i = left; i <= right; i++){
        cout  << a[i] << " ";
    }
    cout << endl;
    int pivotIndex = right;//(left + right)/2;
    int pivotValue = a[pivotIndex];
    swap(a[pivotIndex], a[right]);
    int putIndex = left;
    for (int i = left; i < right; i++)
    {
        if(a[i] > pivotValue) {
            swap (a[i], a[putIndex]);
            putIndex ++;
        }
    }
    swap (a[right], a[putIndex]);
    cout << "After " << endl;
    for (int i =left; i <= right; i++){
        cout <<  a[i] << " " ;
    };
    cout << endl;
    return putIndex;
}
void quicksort (int a[], int left, int right){
    if (left < right){
        int midIndex = arrangement (a, left, right);
        quicksort (a, left, midIndex - 1);
        quicksort (a, midIndex + 1, right);
    }
}
