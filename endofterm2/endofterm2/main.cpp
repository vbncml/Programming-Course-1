//
//  main.cpp
//  endofterm2
//
//  Created by Жанат on 26.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool mt(const string &r1, const string &r2);
bool FillString(string & rr);
void Show(const string & rr);

int main()
{
    vector <string> str;
    string word;
    while (FillString(word))
        str.push_back(word);
    if (word.size() > 0)
    {
        sort(str.begin(), str.end(), mt);
        for_each(str.begin(), str.end(), Show);
    }
        else cout << "No entries.";
    cout << "Bye.\n";
    return 0;
}
bool mt(const string &r1, const string &r2)
{
    if (r1.size() < r2.size())
        return true;
    if (r1.size() == r2.size() && r1 < r2)
        return true;
    else
        return false;
}
bool FillString (string & rr)
{
    cout << "Enter word (quit to quit) : ";
    getline (cin,rr);
    if (rr == "quit")
        return false;
    while (cin.get() != '\n')
        continue;
        return true;
}
void Show(const string & rr)
{
    cout << rr << endl;
}

