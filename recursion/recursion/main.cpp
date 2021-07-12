//
//  main.cpp
//  recursion
//
//  Created by Жанат on 20.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;

int fact  (int n);

int main()
{
    cout << fact (4);
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

