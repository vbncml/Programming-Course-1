//
//  main.cpp
//  iof2
//
//  Created by Жанат on 09.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char filename[20];
    cin >> filename;
    ofstream fout (filename);
    char ch[20];
    cin >> ch;
    fout << ch;
    return 0;
}

