//
//  main.cpp
//  jhgv
//
//  Created by Жанат on 24.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    float f = 3321.231;
    cout.setf(ios_base::fixed);
    cout.precision(3);
    cout << f;
    return 0;
}

