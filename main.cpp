//
// Created by decider on 01.03.2020.
//
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;
int main()
{
    char s[80];
    float r;
    int x = 0, y = 0, i = 0;
    string cr, shname, cx, cy;
    cout << "Enter a shape, set its values" << endl;
    cin.getline(s, 80);
    cout << "\n" << endl;
    for (int i = 0; s[i] != '\0'; i++) { // Вывод данных фигуры
        cout << s[i];
    }
    while (s[i] != '(') {
        shname += s[i];
        i++;
    }
    if (shname == "circle") {
        i = 7;
        while (s[i] != ' ') {
            cx += s[i];
            i++;
        }
        i++;
        while (s[i] != ',') {
            cy += s[i];
            i++;
        }
        i += 2;
        while (s[i] != ')') {
            cr += s[i];
            i++;
        }
    }
    x = atoi(cx.c_str());
    y = atoi(cy.c_str());
    r = stof(cr);
    cout << endl;
    cout << "  x = " << x << "\n  y = " << y
         << "\n  perimeter = " << 2 * M_PI * r << "\n  area = " << M_PI * r * r
         << endl;
    return 0;
}
