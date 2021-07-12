//
//  main.cpp
//  str1
//
//  Created by Жанат on 11.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
bool f(string &str);
int main()
{

    string word;
    cin >> word;
    cout << f(word);
    return 0;
}
bool f(string &str)
{
    string str1 = str;
    reverse(str.begin(), str.end());
    if ((str == str1)){
        return true;
    }
    else{
        return false;
    }
}



