//
//  main.cpp
//  1486
//
//  Created by Жанат on 24.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{

    char A[500][500];
    int M, N;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++){

            cin >> A[i][j];
    }
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++){
            for (int a = i; a <= N; a++)
            for (int b = j; b <= M; b++){
                if (A[i][j] == A[a][b]){
                    cout << A[a][b];
                    cout << endl;
                }
            }
        }
    
    
    return 0;
}

