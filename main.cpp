//
// Created by decider on 01.03.2020.
//

#include <iostream>
using namespace std;

int main () {
    char s[80];
    string shape;
    cout << "Enter a shape, set its values"<<endl;
    cin.getline (s, 80);
    for (int i = 0; s[i] != '\0'; i++) // Вывод данных фигуры
        cout << s[i] ;
    cout <<endl;
    for (int i = 0; s[i] != ' '; i++) // Запоминаем название фигуры
        shape +=s[i];
    cout << shape <<endl;
    return 0;
}
