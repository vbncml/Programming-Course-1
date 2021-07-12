//
//  main.cpp
//  ref3
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
char & f(char &);
int main()
{
    char c = '+';
    cout << c << " ";
    char &b = c;
    cout << f(b);
    return 0;
}
char & f(char &) {
    char ch;
    char ch1 = '-';
    char tmp = ch;
    ch = ch1;
    ch1 = tmp;
    return ch;
}

