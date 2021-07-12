//
//  main.cpp
//  problem9
//
//  Created by Жанат on 27.10.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname [SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo ( student pa[], int n);
void display1 (student st);
void display2 (const student*ps);
void display3 (const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student [class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i< entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}
int getinfo (student pa[], int n){
    int i;
    char name [SLEN];
    for (i=0; i<n; i++)
    {
        cout << "Student name: ";
        char ch;
        ch = cin.get();
        if (ch=='\n'){
            break;
        }
        cin.getline(name, SLEN-1);
        pa[i].fullname[0] = ch;
        strcat(pa[i].fullname, name);
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << " OOP Level: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}
void display1(student st){
    cout << "Student:\t" << st.fullname << endl
         <<"Hobby:\t" << st.hobby << endl
         <<"OOP Level:\t" << st.ooplevel << endl;
}
void display2(const student * ps) {
    cout << "Student:\t" << ps->fullname << endl
    << "Hobby:\t" << ps->hobby << endl
    << "OOP Level:\t" << ps->ooplevel << endl;
}
void display3(const student pa[], int n) {
    for (int i=0; i < n; i++) {
        display2(&pa[i]);
    }
}