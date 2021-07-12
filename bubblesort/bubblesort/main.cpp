//
//  main.cpp
//  bubblesort
//
//  Created by Жанат on 28.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int  N=5;
int main()
{
    int k = 5;
    int z=0;
    bool sorted = false;
    int a[]= {1,4,5,3,2};
    while (!sorted) {
        sorted = true;
        for (int i = N; i > z; i--) {
            if (a[i]>a[i-1]){
                int temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
                sorted = false;
            }
            for (int j = 0; j < k; j++)
            cout << a[j]<< " ";
            cout<< endl;
            }
        z=z+1;
    }
    return 0;
}

