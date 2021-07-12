//
//  main.cpp
//  problem1
//
//  Created by Жанат on 22.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
double calculate(int x, int y);
int main()
{
    int x;
    int y;
    while ((x!=0) && (y!=0)){
    cin >> x >> y;
    cout << calculate(x,y);
    }
    return 0;
}
double calculate (int x, int y){
    return (2*x*y*0.01)/((x+y)*0.01);
}
