//
//  main.cpp
//  ref2
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//


#include <iostream>
using namespace std;
int f(int **&p);
int main()
{
    int a=24;
    int *p=&a;
    int **p2 = &p;
    cout << p2 << " ";
    cout << f(p2) << endl;
    cout << p2;
    return 0;
}
int f(int **&p){
    **p = 2;
    return **p;
}

