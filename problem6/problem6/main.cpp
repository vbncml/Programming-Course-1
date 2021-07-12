//
//  main.cpp
//  problem6
//
//  Created by Жанат on 26.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void reverse_array( double ar[], int n);
void reverse_array1 (double ar[], int n);
int main()
{
    int Max;
    cin >> Max;
    double numbers[Max] ;
    int size = fill_array(numbers, Max);
    show_array (numbers, size);
    cout << "Reversed array\n ";
    reverse_array(numbers, size);
    show_array(numbers, size);
    cout << "One more reverse|n";
    reverse_array1 (numbers, size);
    show_array(numbers, size);
    return 0;
}
int fill_array (double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i< limit; i++)
    {
        cin >> temp;
        if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}
void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar [i] << " ";
    }
}
void reverse_array( double ar[], int n)
{
    double temp;
    for (int i = 0; i < --n; i++)
    {
        temp = ar[i];
        ar[i] = ar[n];
        ar[n] = temp;
        
}
}
void reverse_array1 (double ar[], int n)
{
    double temp;
    for (int i = 1; i < -- n-1; i++)
    {
        temp = ar[i];
        ar[i] = ar[n-1];
        ar[n-1] = temp;
    }
}
