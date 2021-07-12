//
//  main.cpp
//  sort_1
//
//  Created by Жанат on 04.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    const int n=7;
    int a[n] = {7,6,5,4,3,2,1};
    for (int i = 0; i < n-1; i++){
        int min = a[i];
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (a[j] < min) {
                min = a[j];
                minIndex = j;
            }
        }
        int tmp = a[i];
        a[i]=a[minIndex];
        a[minIndex]=tmp;
        for(int k = 0; k < n; k++)
            cout << a[k] << " ";
            cout << endl;
    }
        return 0;
}

