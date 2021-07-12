//
//  main.cpp
//  iof4
//
//  Created by Жанат on 10.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    
    ifstream fin("Gaukhar3");
    ifstream fin1("Gaukhar3.txt");
    ofstream fout("Gaukhar4.txt");
    if ( ! fin  || ! fin1 ) {
        cerr << "Error fin!\n";
        return -1;
    }
    else
    {
            fstream fout("Gaukhar4.txt");
            while (fin && fin1){
            string str1, str2;
            getline(fin, str1);
            getline (fin1, str2);
                fout << str2 + " " + str1 << endl ;
            }
        fout.close();
        fin.close();
        fin1.close();
    }
    cin.get();

    return 0;
}
