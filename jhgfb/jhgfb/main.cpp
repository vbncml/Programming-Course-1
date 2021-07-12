//
//  main.cpp
//  jhgfb
//
//  Created by Жанат on 09.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;

int main (void) {
    
    
    ofstream out;
    out.open("test.txt", ios::out);
    if(!out) cout <<1;
    out<<87.5;
    if(!out) cout <<2;
    
    
    
    out.close();
    return 0;
}
