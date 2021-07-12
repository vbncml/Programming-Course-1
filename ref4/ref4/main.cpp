//
//  main.cpp
//  ref4
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
void calcQuotient(double n1, double n2, double & answer);
int main()
{
    double num1, num2, answer;
    double &quotient = answer ;
    num1 = 4;
    num2 = 5;
    calcQuotient(num1, num2, quotient);
    return 0;
}
void calcQuotient( double n1, double n2, double & answer){
    answer = n1/n2;
    cout << answer;
}

