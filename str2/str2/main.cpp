//
//  main.cpp
//  str2
//
//  Created by Жанат on 11.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
bool f(const string &st);
int main()
{
    string word;
    cin >> word;
    cout << f(word);
    return 0;
}

bool f(const string & st)
{
        string temp_orig = st;
        string temp_rev;
        int j = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (!isalpha(st[i]))
                continue;
            else
            {
                temp_orig[j] = tolower(st[i]);
                j++;
            }
        }
        temp_orig.resize(j);
        temp_rev = temp_orig;
        reverse(temp_rev.begin(), temp_rev.end());
        cout << "\nReversed: " << temp_rev << endl;
        if (temp_rev == temp_orig)
            return true;
        else
            return false;
    }