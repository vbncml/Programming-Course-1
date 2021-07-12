//
//  main.cpp
//  fstream
//
//  Created by Жанат on 05.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    string filename;
    cout << "Enter name for new file: ";
    cin >> filename;
    ofstream fout(filename.c_str());
    fout << "For your eyes only!\n";
    cout << "Enter your secret number: ";
    float secret;
    fout << "Your secret number is " <<secret << endl;
    fout.close();
    ifstream fin (filename.c_str());
    cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch))
        cout << ch;
    cout << "Done\n";
    fin.close();
    
    return 0;
}

