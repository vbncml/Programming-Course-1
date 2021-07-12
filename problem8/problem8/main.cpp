//
//  main.cpp
//  problem8
//
//  Created by Жанат on 27.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//


#include <iostream>
const int Max = 5;

double * fill_array(double *begin, double *end);
void show_array(const double *begin, const double *end);
void revalue(double *begin, double *end, int r);

int main() {
    using namespace std;
    double properties[Max];
    double * end;
    end = fill_array(properties, properties+Max);
    show_array(properties, end);
    cout << "Enter revaluation factor: ";
    double factor;
    cin >> factor;
    revalue(properties, end, factor);
    show_array(properties, end);
    cout << "Done.\n";
    return 0;
}

double * fill_array(double *begin, double *end){
    using namespace std;
    double temp;
    double *pt;
    int i=0;
    for (pt = begin; pt != end; pt++, i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) // signal to terminate
            break;
        *pt = temp;
    }
    return pt;
}


void show_array(const double *begin, const double *end){
    using namespace std;
    const double *pt;
    int i=0;
    for (pt = begin; pt != end; pt++, i++){
        cout << "Property #" << (i + 1) << ": $";
        cout << *pt << endl;
    }
}


void revalue(double *begin, double *end, int r){
    double *pt;
    for (pt = begin; pt != end; pt++)
        *pt *= r;
}