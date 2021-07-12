//
//  main.cpp
//  ref1
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int & f(int *p);
int main()
{
    int a=24;
    int *p=&a;
    int *p2;
    cout << &a << " ";
    p2 = &f(p);
    cout << p2;
    return 0;
}
int & f(int *p){
    int b = 5;
    int *p1 = &b;
    return *p1;
}

