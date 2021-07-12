//
//  main.cpp
//  recurs
//
//  Created by Жанат on 02.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int binary_search(int *a,int x,int l,int h);
int main()

{   int n,x;
    cin >> n ;
    int a[n];
    for (int i=0; i <n; i++){
        cin >> a[i];
    }
    cout << "enter x element: " ;
    cin >> x;
    if (binary_search(a, x, 0, n)!=-1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
int binary_search(int *a, int x, int l, int h)
{
    int m;
    m = (l+h)/2;
    if (a[m]==x)
        return m;
     if (m==l || m== h)
         return -1;
       if (a[m]<x){
        return binary_search(a,x,m,h);
        }
    else{
        return binary_search(a,x,l,m);
    }
}
