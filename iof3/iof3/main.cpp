//
//  main.cpp
//  iof3
//
//  Created by Жанат on 09.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char filename[20];
    cin >> filename;
    char filename1[20];
    cin >> filename1;
    ifstream fin(filename);
    ofstream fout(filename1);
        
        if ( ! fin ) {
            cerr << "Error fin!\n";
            return -1;
        }
    else
    {
        fstream fout(filename1);
        fout << fin.rdbuf();
        fout.seekg(0);
        fout.close();
        fin.close();
    }
    cin.get();
    
    return 0;
}

