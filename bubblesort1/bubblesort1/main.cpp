//
//  main.cpp
//  bubblesort1
//
//  Created by Жанат on 28.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int n,p,a[100];

int main() {
    cin >> n;
    p=n;
    
    for (int i=0; i<n;i++)
        cin >> a[i];
    
    bool sort=false;
    while (!sort) {
        sort=true;
        for (int i=0; i<n-1; i++)
            if ( a[i]> a[i+1]) {
               int tmp= a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
                sort=false;
            }
        for (int k=0;k<p;k++)
            cout << a[k] << ' ';
        
        }
    n=n-1;
    return 0;
}