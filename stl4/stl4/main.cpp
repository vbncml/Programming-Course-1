//
//  main.cpp
//  stl4
//
//  Created by Жанат on 16.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int reduce(long ar[], int n);
int main()
{
    int n;
    cin >> n;
    long a[n];
    for (int i =0; i < n; i++){
    cin >> a[i];
    }
    int num = reduce(a, n);
    cout << num;
    cin.get();
    cin.get();
    
    return 0;
}
int reduce(long ar[], int n)
{
    
    sort(ar, ar+n);
    return unique(ar, ar+n) - ar;
    
}

