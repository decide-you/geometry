//
// Created by decider on 01.03.2020.
//

#include <iostream>
using namespace std;

int main () {

    char s[80];
    float r, area;
    int k, x, y;
    string shape, cr;
    cout << "Enter a shape, set its values"<<endl;
    cin.getline (s, 80);
    for (int i = 0; s[i] != '\0'; i++) { // Вывод данных фигуры
        cout << s[i] ;
        if (s[i] == ',') {
            k = i+2;
            while (s[k] != ')') {
                cr += s[k];
                k++;
            }
        }
    }
    cout <<endl;
    for (int i = 0; s[i] != '('; i++) // Запоминаем название фигуры
        shape +=s[i];
    r = stof (cr);
    cout << shape << " " << r<<endl;

    return 0;
}
