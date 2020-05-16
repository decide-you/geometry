#include <cmath>
#include <iostream>
using namespace std;
void Print(
        char s[],
        int x,
        int x1,
        int x2,
        int x3,
        int y,
        int y1,
        int y2,
        int y3,
        int r,
        int& numb)
{
    int i = 0;
    string shape;
    while (s[i] != '(') {
        shape += s[i];
        i++;
    }
    if (shape == "circle") {
        cout << numb << ". ";
        for (int k = 0; s[k] != '\0'; k++) { // Output input
            cout << s[k];
        }
        cout << "\n    x = " << x << "\n    y = " << y
             << "\n    perimeter = " << 2 * M_PI * r
             << "\n    area = " << M_PI * r * r << endl;
    } else if (shape == "triangle") {
        cout << numb << ". ";
        for (int k = 0; s[k] != '\0'; k++) { // Output input
            cout << s[k];
        }
        cout << "\n    x1 = " << x1 << ", y1 = " << y1 << "\n    x2 = " << x2
             << ", y2 = " << y2 << "\n    x3 = " << x3 << ", y3 = " << y3
             << endl;
    }
    numb++;
}
