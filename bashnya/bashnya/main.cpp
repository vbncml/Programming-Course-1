//
//  main.cpp
//  bashnya
//
//  Created by Жанат on 28.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>

using namespace std;

void transfer ( int from,int to,int via,int n )

{
    
    if(n==1)
        
    {
        
        cout << a << "->" << b;
        
    }
    
    else
        
    {
        
        transfer(from,via,to,n-1);
        
        print_move(from,to);
        
        transfer(via,to,from,n-1);
        
    }
    
}



int main(int k,char**s)
{
    cin >> k;
    
    if(k>1&&atoi(s[1]))
        
    {
        
        transfer( 1,3,2,atoi(s[1]));
        
    }
    
}