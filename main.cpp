//
// Created by decider on 01.03.2020.
//
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;
int main () {

    char s[80];
    float r;
    int k, x, y;
    string cr;
    cout << "Enter a shape, set its values" <<endl;
    cin.getline (s, 80);
    cout << "\n" << endl;
    for (int i = 0; s[i] != '\0'; i++) { // Вывод данных фигуры
        cout << s[i] ;
        if (s[i] == ',') {     // Находим из массива радиус
            k = i+2;
            while (s[k] != ')') {
                cr += s[k];
                k++;
            }
        }
    }
    cout <<endl;
    r = stof (cr);
    cout << "  perimeter = " << 2 * M_PI * r<< "\n  area = " << M_PI * r * r <<endl;

    return 0;
}
