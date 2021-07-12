//
//  main.cpp
//  problem4
//
//  Created by Жанат on 23.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks, unsigned meganumber);
int main()
{
    double total, choices, rangeofmeganumer;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed and range of mega numbers:\n";
    while ((cin >> total >> choices>> rangeofmeganumer) && choices <= total) {
        cout <<  "You have one chance in ";
        cout << probability(total, choices, rangeofmeganumer);
        cout << "of winning.\n";
        
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
long double probability (unsigned numbers, unsigned picks, unsigned meganumber)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    unsigned m;
    for (n = numbers, p = picks, m = meganumber; (p > 0) && (m > 0); n--, p--, m--);
    result = result * n / p * 1 / m;
    return result;
}

