//
//  main.cpp
//  sort1
//
//  Created by Жанат on 28.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;

int n,a[100];

int main() {
    cin » n;
    for (int i=0;i<n; i++){
        cin » a[i];
    }
    for (int m=0;m<n-1;m++){
        int min=a[m],ind=m;
        for (int j=m+1;j<n-1;j++){
            if (a[j]<min){
                min=a[j];
                ind=j;
            }
            int temp=a[m];
            a[m]=a[j];
            a[j]= temp;
        }
        for (int k=0; k<n; k++)
            cout « a[k]« " ";
        cout « endl;
    }
    return 0;
}