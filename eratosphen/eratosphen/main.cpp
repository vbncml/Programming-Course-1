//
//  main.cpp
//  eratosphen
//
//  Created by Жанат on 11.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool alive[n];
    for (int i = 2; i <= n; i++){
        alive[i] = true;
    }
    for (int i = 2; i <= n; i++){
        if (alive[i]){
        for (int j = i*2; j <= n; j+=i){
            alive[j] = false;
        }
    }
    }
    for (int k = 2; k <= n; k++){
        if (alive[k] == true)
        cout << k << " ";
        
    }
    return 0;
}

