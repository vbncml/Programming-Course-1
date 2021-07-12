//
//  main.cpp
//  problem5
//
//  Created by Жанат on 26.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    while (cin >> n){
        cout << n << " != " <<fact(n);
    }
    return 0;
}
int fact (int n)
{
    if (n==0)
    { return 1;
    }
    else {
        return n*fact(n-1);
    }
}