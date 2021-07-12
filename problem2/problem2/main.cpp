//
//  main.cpp
//  problem2
//
//  Created by Жанат on 22.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int input (int a[],int n);
double average (int a[],int n);
void display (int a[], int n);
const int N=10;
int main()
{
    int a[N];
    int n = input(a,N);
    display(a,n);
    cout << average(a,n);
    return 0;
}
int input (int a[],int n){
    double b;
    int count=0;
    for (int i = 0; i<N; i++){
    cin >> b;
        if(b>0){
            a[i]=b;
            count ++;
                }
        else
        break;
}
    return count;
}
double average (int a[], int n){
    double s=0;
    
    for (int i=0;i<n;i++){
        s += a[i];
    }
        return s/n;
}
void display (int a[], int n){

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
}
}