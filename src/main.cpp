//
// Created by decider on 01.03.2020.
//
#include <cmath>
#include <figurecheck.h>
#include <iostream>
#include <printfunc.h>
using namespace std;

int main()
{
    char s1[50];
    char s2[50];
    int r;
    int x = 0, y = 0, x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, numb = 1;
    string shape;
    cout << "Enter a 1st, 2nd shape, set its values" << endl;
    cin.getline(s1, 50);
    cin.getline(s2, 50);
    cout << endl;
    inpsh(s1, x, x1, x2, x3, y, y1, y2, y3, r);
    Print(s1, x, x1, x2, x3, y, y1, y2, y3, r, numb);
    cout << endl;
    inpsh(s2, x, x1, x2, x3, y, y1, y2, y3, r);
    Print(s2, x, x1, x2, x3, y, y1, y2, y3, r, numb);
    cout << endl;
    return 0;
}
