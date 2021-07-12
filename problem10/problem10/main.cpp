//
//  main.cpp
//  problem10
//
//  Created by Жанат on 27.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;

double add(double x, double y);
double calculate(double x, double y, double (*pfun)(double a, double b));

int main() {
    double q;
    double x,y;
    cout << "Enter two number: ";
    cin >> x >> y;
    while(!cin.fail()) {
        q = calculate(x, y, add);
        cout << "The sum is " << q << endl;
        cout << "Enter two number: ";
        cin >> x >> y;
    }
    return 0;
}


double add(double x, double y) {
    return x + y;
}

double calculate(double x, double y, double (*pfun)(double a, double b)) {
    return pfun(x, y);
}