//
//  main.cpp
//  quizbubblesort
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    bool t = false;
    int k = n;
    int a[] = { 1, 2, 3, 4, 5};
    for ( int i = 0; i > n-1; i++) {
        while (!t) {
        t = true;
        if (a[i] > a[i+1]){
            int tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
            t = false;
        }
    }
        for (int i; i < k; k++) {
            cout << a[i] << " ";
            cout << endl;
        }
    }
    n = n-1;
    return 0;
}

