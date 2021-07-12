//
//  main.cpp
//  stl7
//
//  Created by Жанат on 16.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector <int> t;
t Lotto (int total, int chosen);
void Display(const t & n);
int main()
{
    int total, chosen, n;
    cin >> total;
    cin >> chosen;
    if (total > chosen) {
        t win = Lotto(total,chosen);
        t created = Lotto(total, chosen);
        cout << "Winner numbers: ";
        Display(win);
        cout << "Your numbers: ";
        Display(created);
        cout << "Matching numbers: ";
        for (int i = 0; i < chosen; i++)
            if (find(win.begin(), win.end(), created[i]) != win.end())
            {
                cout << created[i] << " ";
                n++;
            }
        if (n == 0)
            cout << "None" << endl;
        else
            cout << endl;
        if (n == chosen)
            cout << "Congratulations! You win!";
    }
    
    cin.get();
    cin.get();
    
    return 0;
}
t Lotto (int total, int chosen)
{
    t temp;
    for (int i = 0; i < total; i++)
        temp.push_back(i+1);
    
    for( int i = 0; i < chosen; i++)
        random_shuffle(temp.begin(), temp.end());
    temp.erase(temp.begin()+chosen, temp.end());
    sort (temp.begin(), temp.end());
    return temp;
        
}
void Display(const t & n)
{
    for (int i = 0; i < n.size(); i++)
        cout << n[i] << " ";
    cout << endl;
}


