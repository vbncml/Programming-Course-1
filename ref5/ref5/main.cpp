//
//  main.cpp
//  ref5
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
void calcSumAndDiff(int n1, int n2, int & sum, int & diff);
int main()
{
    int num1, num2, s, d;
    int &numSum = s;
    int &numDiff = d;
    num1 = 4;
    num2 = 5;
    calcSumAndDiff(num1, num2, numSum, numDiff);
    return 0;
}
void calcSumAndDiff( int n1,int n2, int & sum, int & diff){
    sum = n1 + n2;
    diff = n1 - n2;
    cout << sum << "\n" << diff;
}

