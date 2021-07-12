//
//  main.cpp
//  problem3
//
//  Created by Жанат on 22.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
    
};
void show ( box b);
void showv (box*ps);
int main()
{
    box one = { "First", 4.5, 6.7, 8, 9};
    box two = { "Second", 5.6, 7.8, 9, 12};
    show (one);
    show (two);
    showv (&one);
    showv (&two);
    return 0;
}
void show (box b) {
    cout << b.maker << " "<< b.height << " "<< b.width <<" "<< b.length<< " "
    << b.volume << endl;
}
void showv (box*ps){
    ps->volume = ps->width*ps->length*ps->height;
    cout << ps->volume<< endl;
}

