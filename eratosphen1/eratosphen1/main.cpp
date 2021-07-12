//
//  main.cpp
//  eratosphen1
//
//  Created by Жанат on 11.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    bool alive[n];
    for (int i = 0; i < n; i++){
        alive[i] = true;
    }
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (alive[i]){
            for (int j = 0; j < m; j++){
                if (i%a[j] == 0)
                alive[i] = false;
            }
        } //bugi bugi
    }
    for (int k = 0; k < n; k++){
        if (alive[k] == true)
            cout << k << " ";
    }
    return 0;
}

