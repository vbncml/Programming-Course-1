//
//  main.cpp
//  listing16.2
//
//  Created by Жанат on 10.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{

    ifstream fin;
    fin.open("toby.txt");
    if (fin.is_open() == false)
    {
        cerr << "Can't open file. Bye. \n";
        exit(EXIT_FAILURE);
    
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while(fin)
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done\n";
    fin.close();
    
    return 0;
}

